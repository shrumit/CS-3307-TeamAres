# Contributing

## Workflow

We will use a branch-based single repository workflow.

### Preparing your Environment

Clone the main repository to your local machine (do not fork).

### Pushing code

*Every feature/bug/improvement has its own Issue. Every Issue has its own branch.*

**1. Switch to a branch:**

If the branch doesn't already exist:
```
git checkout -b [name_of_branch]
git push origin [name_of_branch]
```
If the branch already exists, (for example, when two people are working on the same feature) switch to the branch on your computer. `git fetch` updates your local repository to the latest version on Github, including all the branches and everything:
```
git fetch
git checkout [name_of_branch]
```
Push commits to your branch: `git push origin [name_of_branch]`

See all branches: `git branch`. The current branch that you are on will have an asterisk. [More on branches](https://github.com/Kunena/Kunena-Forum/wiki/Create-a-new-branch-with-git-and-manage-branches).

*Do not add commits directly to master branch, ever. You should never have to use `git push origin master`*

**2. Ensure that there exists a Github Issue describing what you are working on.**

You may also want to "assign" yourself or others on that Issue.

**3. When you are done pushing your commits to your branch, make a Pull Request on Github.**

When a PR is merged, the branch can be deleted. Reference the Issue that the PR fixes by using a hashtag.

-------------
#### Note on commit naming conventions -  use present-tense imperative.

Correct: `Add tests` 

Incorrect: `Added tests ` / `Adds tests` / `My tests` / `Bob's GUI tests`

The reason for this is that when you switch to a particular commit, it should sound like you are giving orders to Git. Imagine someone is "building up" their repo from the `Initial commit` (the only exception to present-tense imperative). Then they will `Add tests`, `Fix feature #12`, `Add scatter plot` and so on.

### Note on branch naming
Can be feature name (eg: `scatter-plot`) or Issue number (eg: `issue-#012`).
