# lecture 4 note
### 202233121 박나경
---


### Standard Output

$ command **>** some_file.txt: 
 커맨드의 결과를 파일로 만들어 저장할 수 있다.

$ command **>>** some_file.txt:
커맨드의 결과를 some_file.txt 파일에 덧붙인다.
만약 파일이 존재하지 않을 시, 파일을 새로 만든다.

$ command **<** some_file.txt:
파일의 데이터를 커맨드에 입력한다.

$ **cat**:
특정 파일의 내용물을 보여준다.

ex)
```
$ cat < file1 > file2

: 파일1의 결과를 파일2에 저장한다.
```  


**Pipeline**  
$ command1 **|** command2 **|** command3:
커맨드가 1>2>3의 순서대로 작동한 뒤 출력된다.

ex)
```
$ ls -lh | less

: 리스트를 페이지 단위로 보여주며, space key로 페이지를 넘길 수 있다.
: q key를 누르면 빠져나올 수 있음.


$ ls | wc -l

: 리스트의 파일 갯수를 표시한다.
```


$ **echo** [text/string]:
텍스트나 문자열을 출력한다.


**Backslash**의 사용 예제:

```
$ ls -1 \
> --reverse \
> --human-readable

: 개행의 역할
```

---

### Permission(권한)

**-rwxrwxrwx 이란?**

-: File type
* -: file
* d: directory 


rwx(owner)/rwx(group)/rwx(all others):  
 read, write, execute


관련 command:

$ chmod 600 some_file:

6 = 110 = rw- :for owner  
0 = 000 = --- :for group  
0 = 000 = --- :for others

 : some_file의 권한 정보를 바꿀 수 있다.


**참고자료**  

![p.9](https://ifh.cc/g/jjsVlJ.png)  
*출처: 오픈소스SW 5주차 강의 파일 p.9*

**Superuser**

[사용자@linuxbox_me]$ sudo -i  
Password for me:  
root@linuxbox: ~#  

: '사용자'가 superuser의 권한을 갖는다 (모든 시스템에 접근 가능)  
* "exit"을 타이핑하면 해제됨.


 ---

 **Text Editors**

 CLI-based:
* vi, vim
* Emacs
* ***nano***

GUI-based
* ***gedit***
* kwrite

텍스트 에디터를 통해 shell script(sh파일)을 생성할 수 있다.

---

**History**

$ history:
 최근 사용했던 명령어들을 숫자와 함께 출력한다.


