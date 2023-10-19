# lecture 6 note
### 202233121 박나경
---

## Git  

주요 기능
* Version control
* collaboration  

### Version Control의 방식

1. change 
	- base 버전에서 누적하여 복구하거나 덮어씀

2. snapshot(Git에서 사용)  
	- 각각의 버전의 스냅샷이 개별적으로 존재

* Local
* Centralized
* Distriuted(Git에서 사용)  
: 각각의 Local computer가 Server conputer의 데이터를 그대로 갖고 있음.


### Git의 작업 방식
**참고자료**
![p.5](https://i.ibb.co/nkDjNLg/2023-10-12-230921.png)

---

### Git 실습

1. Git level

(1) System level  
file: /etc/gitconfing

(2) Global(user) level  
file: ~/.config/git/congig

(3) Local level  
file: .git/gitconfig


*****내 컴퓨터의 level 확인하기***

$ git config --list (각각의 config의 정보를 보여줌)  

$ git config --list --show-origin (어디에 저장되어 있는지 알려줌)

_

**기본 setting**

$ git config --global user.name "user name"  
& git config --global user.email useremail@gmail.com  
& git config --global init.defaultBranch main

_

**Git init**

```
$ git init
Initialized empty Git repository in /home/username/OSS/transfomers/.git/	//새롭게 생성

$ ls -lha
...
drwxrwxr--x 5 username username n.0k date .git //git init에 의해 생성됨
...
```

**GIt status**

$ git status  
: staging area에 속한 파일을 볼 수 있는 명령어

**Git add**

$ git add [file_name]  
: 파일을 staging area에 올릴 수 있음

$ git add .  
: 모든 파일이 staging area에 올라감

$ git rm --cached [file_name]  
: ***git***에서 파일이 제거됨 (unstage됨)

※staging area에 올린 후 수정된 파일은 moditied 상태가 됨. 그대로 commit 시 수정 전 파일이 version으로 올라가게 됨. 다시 staging area로 올릴 필요가 있음.

$ nano .gitignore 라는 파일을 따로 만들어 git에 넣지 않을 파일을 넣으면 git add . 을 해도 commit 되지 않음. (git에 의해 무시됨)


**Commit**

$ git commit -m "commit message"  
: commit message는 무엇을 위해 commit 했는지 알 수 있도록 도와줌.  
: commit 이후 수정하면 맨 첫단계로 돌아감.

---
**Change branch name**
예제
```
$ git branch
* branch_name
$ git branch -m master main
$ git branch
* main
```

