# Contributing Guidelines

Thanks for considering a contribution to the LEARNING repository! We welcome contributions of all skill levels across languages like C++, Python, and more as the repo grows.

This guide explains how to set up locally, find something to work on, and submit high‑quality pull requests.

## Before You Start

- Read the README to understand the structure and goals of this repo.
- Browse existing folders to avoid duplicating programs or topics.
- Check open Issues for tasks, ideas, or bugs you can help with.
- If no issue exists for your change, open one first to discuss the approach.
- Comment on the issue you’d like to tackle so a maintainer can assign it to you and avoid duplicate work.

## How to Contribute

1) Fork this repository to your GitHub account.
2) Clone your fork locally.
3) Pick an issue or propose a new one; comment to claim it before starting.
4) Create a branch for your work:
	 - Feature: `feature/<short-description>`
	 - Fix: `fix/<short-description>`
5) Make your changes and commit with clear, descriptive messages.
6) Push your branch and open a Pull Request (PR) to this repository’s default branch.
7) Reference related issues in the PR description (e.g., “Closes #123”).

Keep PRs small and focused. Focused PRs are much easier to review and merge.

### Step-by-step (with commands for Windows PowerShell)

1. Clone your fork and set the upstream remote (original repo):

```powershell
# Replace <your-username> with your GitHub username
git clone https://github.com/<your-username>/LEARNING.git
cd LEARNING

# Add the original repository as upstream to keep your fork in sync
git remote add upstream https://github.com/bugOpsX/LEARNING.git
git remote -v
```

2. Create a feature branch:

```powershell
# Use a short, clear branch name
git checkout -b feature/your-feature-name
```

3. Make changes:

- Add files to the correct folder (e.g., `C++/`, `PYTHON/`).
- Follow naming and header comment conventions (see sections below).

4. Test locally (examples):

```powershell
# C++ (from the C++ folder)
g++ program_name.cpp -o program_name
./program_name.exe

# Python (from the PYTHON folder)
python program_name.py
```

5. Stage and commit:

```powershell
# Stage specific files (preferred) or everything
git add path\to\your\file
# or: git add .

git commit -m "Add <short description> (language/folder)"
```

6. Push your branch to your fork:

```powershell
git push -u origin feature/your-feature-name
```

7. Open a Pull Request:

- Go to your fork on GitHub and click “Compare & pull request”, or
- Visit: https://github.com/bugOpsX/LEARNING/compare and select your branch.
- In the PR description, explain what you changed and why, and link the issue (e.g., Closes #123).

### Keep your fork in sync (recommended)

Before starting new work, update your local `main` (or `master`) from the original repo and refresh your branch:

```powershell
# Fetch latest changes from upstream
git fetch upstream

# If your default branch is main (common)
git checkout main
git pull upstream main
git push origin main

# If your default branch is master (older repos)
# git checkout master
# git pull upstream master
# git push origin master

# Update your feature branch
git checkout feature/your-feature-name
git merge main
# or: git rebase main
```

### PR checklist (quick)

- [ ] Files live in the correct language folder and are named clearly.
- [ ] Program runs locally (compile C++ / run Python) and shows expected output.
- [ ] Short header comment with description, approach, and example I/O.
- [ ] Commit message is clear and in imperative mood.
- [ ] PR description links the related issue and explains the change.

## Project Structure & Conventions

- Place code in the correct language folder (e.g., `C++/`, `PYTHON/`). If adding a new language, follow the same pattern with a top‑level folder.
- Use clear, descriptive file names without spaces. Prefer:
	- C++: `prime_checker.cpp`, `gcd_using_functions.cpp`
	- Python: `prime_checker.py`, `gcd_functions.py`
- Add a brief header comment at the top of each file with:
	- Problem/goal description
	- Approach/algorithm in one or two lines
	- Example input/output
- Keep programs self‑contained with simple console I/O unless otherwise specified.
- Avoid adding large binary files or external dependencies.

### C++ Quick Start (Windows PowerShell)

Compile and run a single file:

```powershell
# From the C++ folder
g++ program_name.cpp -o program_name
./program_name.exe
```

If you have multiple source files, list them all in the compile command.

### Python Quick Start (Windows PowerShell)

Run a Python script:

```powershell
# From the PYTHON folder
python program_name.py
```

If you prefer, `py program_name.py` also works on many Windows setups.

## Coding Guidelines

- Write clean, readable code with meaningful variable and function names.
- Keep functions short and focused; prefer simple control flow.
- Add comments for non‑obvious logic, edge cases, or algorithmic choices.
- Input/Output:
	- Read from standard input and print to standard output unless the task demands otherwise.
	- Show a short usage example in comments when helpful.
- Tests/examples: If applicable, include sample inputs/outputs in comments to help reviewers verify quickly.

## Commit Messages

- Use clear, descriptive messages in the imperative mood:
	- "Add prime checker in Python"
	- "Fix off‑by‑one in Fibonacci loop"
- If your commit relates to an issue, include the reference (e.g., `#123`).

## Pull Requests

- Ensure your branch is up to date with the default branch before opening the PR.
- Title and description should explain the change, context, and any decisions made.
- Include screenshots for output‑oriented programs if that helps reviewers.
- One focused change per PR (avoid mixing unrelated edits).

## Issues

- Use Issues to report bugs, propose new programs, request enhancements, or ask questions.
- Before opening a new issue, search existing ones to avoid duplicates.
- When possible, apply labels such as `bug`, `enhancement`, or `good first issue` to help with triage.

## Getting Help

If you’re stuck or unsure about direction:

- Open an issue describing your question and what you’ve tried so far.
- Share minimal code snippets or examples that illustrate the problem.

We’re happy to help you get unstuck.

## Housekeeping

- Do not commit private files, secrets, or environment‑specific artifacts.
- Keep your changes scoped to the relevant language folder.
- Large, sweeping renames or reformatting should be discussed in an issue first.

---

Every contribution matters — big or small. Thank you for helping make LEARNING better!
