# DB_Project
해당 Repository는 데이터베이스 실습용 프로젝트입니다

## 어드민 계정
```
ID : admin
PW : 123
```

## 실행방법
### 1. git clone
```
git clone <주소> .
```

### 2. .pc 파일 실행
```
proc <파일이름>
```

## 디렉토리 구조
```
.
├─.vs
│  └─proc_sample
│      ├─FileContentIndex
│      ├─v16
│      │  └─ipch
│      │      └─AutoPCH
│      │          └─ec508070a33eef62
│      └─v17
│          └─ipch
│              └─AutoPCH
│                  ├─39e029483390d054
│                  ├─4d324c3ff98d86e4
│                  ├─79e8be86a5d67abd
│                  ├─9e935a3397b5028b
│                  ├─b5214b5119f0a6f0
│                  ├─cb6fdf7a5b605b84
│                  └─f7490484569f77ef
├─.vscode
├─Debug
│  └─proc_sample.tlog
├─screen
└─x64
    └─Debug
        └─proc_sample.tlog
```

### 1.screen

쉘 화면에서 이용자에게 보여주는 화면을 제공하기 위한 .txt 파일 저장

### 2..pc파일

.pc파일을 proc <파일명> 으로 .c파일로 컴파일 해 작동


## 기능 설명
### 1. 어드민

음식 CRUD 기능 가능

### 2. 유저

오늘의 랜덤 식단 조회 가능, 실제 시간대별로 식단 추천기능
```
06~10시 : 아침
12~14시 : 점심
18~21시 : 저녁
이외에는 식단 추천이 불가능
```
