## Git

Each git directory contains a hidden `.git` file.

To create a new repo from commandline we can run:

```
git init
# Make changes to repo
code README.MD
git status
git add .
git commit -m "added readm.md"

```

## Cloning

We have three ways of cloning: HTTPS, SSH and Github-cli

### HTTPS

```sh 
git clone https://github.com/GHF-practice/Book_Work.git
```
> You'll need to generate a personal access token,
www.github.com/settings/token
This will be used as a password when pushing and commiting. 

### SSH

```sh
git clone git@github.com:GHF-practice/Book_Work.git
```

You will need to create an ssh keypair and add that to github settings SSH Keys.

```sh
ssh-keygen -t rsa
```

You can test connections with:
```sh
ssh -t git@github.com
```

If you create a non default key, then you may need to add it. 
```sh
eval 'ssh agent'
ssh-add /home/user/.ssh/alt_id_rsa
```

### Github-CLI

```sh
gh repo clone GHF-practice/Book_Work
```

## Commits

When we want to commit changes to a repo we run the following. It will first open a window to comment on the commit before staging the files. 


```sh
git commit
```
You will need to have run the following command before hand, if doing it this method. 

```sh
git config --global core.editor vim
```

Unless we pass the -m flag which will then just automatically pass the commit message.

```sh
git commit -m "Updating README.md"
```

## Branches

## Remotes

## Stashing

## Merging

## Add 

When we want to stage the files to be commited.

```sh
git add README.md
git add .
```

## Reset

Reset allows you to move staged changes back to unstaged. It's useful when you to revert all not to be commited.

```sh
git add .
# oops added too much
git reset
git add README.md
```

## Git Config

This is the configuration file that contains all global settings like name, email and editor.

```
git config --list
git config --global user.name "Zig"
git cofing --global user.email zig@gmail.com
```