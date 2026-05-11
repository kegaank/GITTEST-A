# GITTEST-A

研究在 VS Code 中使用 Git 和 GitHub 的完整流程。

## 目录

1. [创建本地仓库](#创建本地仓库)
2. [在 VS Code 中操作 Git](#在-vs-code-中操作-git)
3. [提交文件](#提交文件)
4. [推送到 GitHub](#推送到-github)

---

## 创建本地仓库

在 VS Code 中打开项目文件夹后，可以通过以下方式初始化 Git 仓库：

- **终端命令**：`git init`
- **VS Code 图形界面**：打开源代码管理（Ctrl+Shift+G），点击"初始化仓库"

## 在 VS Code 中操作 Git

VS Code 提供了直观的 Git 图形界面：

| 操作 | 说明 |
|------|------|
| **源代码管理** | Ctrl+Shift+G 打开，查看所有更改 |
| **暂存更改** | 文件旁 `+` 按钮或右键 → 暂存更改 |
| **提交** | 输入消息后按 Ctrl+Enter 或点击提交 |
| **查看历史** | 点击底部状态栏分支名查看提交历史 |

### 常用命令

```bash
git status          # 查看工作区状态
git add <file>      # 暂存文件
git commit -m "消息" # 提交
git log --oneline   # 查看提交历史
```

## 提交文件

基本流程：

1. 创建或修改文件（如 `test-d.c`）
2. 暂存更改：`git add <文件名>`
3. 提交：`git commit -m "描述信息"`
4. 查看状态确保干净：`git status`

## 推送到 GitHub

### 前提条件

- 在 GitHub 上创建远程仓库
- 配置本地远程地址

### 推送步骤

```bash
git remote add origin https://github.com/用户名/仓库名.git
git branch -M main
git push -u origin main
```

### 在 VS Code 中推送

1. 确保已提交所有更改
2. 点击底部状态栏的"发布"按钮
3. 或终端执行 `git push`

> **提示**：如果使用 HTTPS 方式，建议先通过 `gh auth login` 登录 GitHub CLI，避免每次输入凭证。

## 示例文件

- `test.cpp` — C++ Hello World
- `test-d.c` — 包含 `MultiplyResult multiply_check(float a, float b)`，计算两数乘积并返回范围判断

---

*用于学习 VS Code + Git + GitHub 工作流。*
