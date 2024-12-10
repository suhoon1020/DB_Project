
/* Result Sets Interface */
#ifndef SQL_CRSR
#  define SQL_CRSR
  struct sql_cursor
  {
    unsigned int curocn;
    void *ptr1;
    void *ptr2;
    unsigned int magic;
  };
  typedef struct sql_cursor sql_cursor;
  typedef struct sql_cursor SQL_CURSOR;
#endif /* SQL_CRSR */

/* Thread Safety */
typedef void * sql_context;
typedef void * SQL_CONTEXT;

/* Object support */
struct sqltvn
{
  unsigned char *tvnvsn; 
  unsigned short tvnvsnl; 
  unsigned char *tvnnm;
  unsigned short tvnnml; 
  unsigned char *tvnsnm;
  unsigned short tvnsnml;
};
typedef struct sqltvn sqltvn;

struct sqladts
{
  unsigned int adtvsn; 
  unsigned short adtmode; 
  unsigned short adtnum;  
  sqltvn adttvn[1];       
};
typedef struct sqladts sqladts;

static struct sqladts sqladt = {
  1,1,0,
};

/* Binding to PL/SQL Records */
struct sqltdss
{
  unsigned int tdsvsn; 
  unsigned short tdsnum; 
  unsigned char *tdsval[1]; 
};
typedef struct sqltdss sqltdss;
static struct sqltdss sqltds =
{
  1,
  0,
};

/* File name & Package Name */
struct sqlcxp
{
  unsigned short fillen;
           char  filnam[12];
};
static const struct sqlcxp sqlfpn =
{
    11,
    "proctest.pc"
};


static unsigned int sqlctx = 162699;


static struct sqlexd {
   unsigned int   sqlvsn;
   unsigned int   arrsiz;
   unsigned int   iters;
   unsigned int   offset;
   unsigned short selerr;
   unsigned short sqlety;
   unsigned int   occurs;
      const short *cud;
   unsigned char  *sqlest;
      const char  *stmt;
   sqladts *sqladtp;
   sqltdss *sqltdsp;
            void  **sqphsv;
   unsigned int   *sqphsl;
            int   *sqphss;
            void  **sqpind;
            int   *sqpins;
   unsigned int   *sqparm;
   unsigned int   **sqparc;
   unsigned short  *sqpadto;
   unsigned short  *sqptdso;
   unsigned int   sqlcmax;
   unsigned int   sqlcmin;
   unsigned int   sqlcincr;
   unsigned int   sqlctimeout;
   unsigned int   sqlcnowait;
              int   sqfoff;
   unsigned int   sqcmod;
   unsigned int   sqfmod;
   unsigned int   sqlpfmem;
            void  *sqhstv[7];
   unsigned int   sqhstl[7];
            int   sqhsts[7];
            void  *sqindv[7];
            int   sqinds[7];
   unsigned int   sqharm[7];
   unsigned int   *sqharc[7];
   unsigned short  sqadto[7];
   unsigned short  sqtdso[7];
} sqlstm = {13,7};

/* SQLLIB Prototypes */
extern void sqlcxt (void **, unsigned int *,
                    struct sqlexd *, const struct sqlcxp *);
extern void sqlcx2t(void **, unsigned int *,
                    struct sqlexd *, const struct sqlcxp *);
extern void sqlbuft(void **, char *);
extern void sqlgs2t(void **, char *);
extern void sqlorat(void **, unsigned int *, void *);

/* Forms Interface */
static const int IAPSUCC = 0;
static const int IAPFAIL = 1403;
static const int IAPFTL  = 535;
extern void sqliem(unsigned char *, signed int *);

typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{13,4130,1,0,0,
5,0,0,0,0,0,27,72,0,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,10,0,0,1,10,0,0,
36,0,0,2,0,0,31,97,0,0,0,0,0,1,0,
51,0,0,3,0,0,17,203,0,0,1,1,0,1,0,1,97,0,0,
70,0,0,3,0,0,45,205,0,0,0,0,0,1,0,
85,0,0,3,0,0,13,206,0,0,1,0,0,1,0,2,9,0,0,
104,0,0,3,0,0,17,214,0,0,1,1,0,1,0,1,97,0,0,
123,0,0,3,0,0,45,216,0,0,0,0,0,1,0,
138,0,0,3,0,0,13,217,0,0,1,0,0,1,0,2,9,0,0,
157,0,0,3,0,0,17,226,0,0,1,1,0,1,0,1,97,0,0,
176,0,0,3,0,0,45,228,0,0,0,0,0,1,0,
191,0,0,3,0,0,13,229,0,0,1,0,0,1,0,2,9,0,0,
210,0,0,3,0,0,15,243,0,0,0,0,0,1,0,
225,0,0,3,0,0,15,244,0,0,0,0,0,1,0,
240,0,0,3,0,0,15,245,0,0,0,0,0,1,0,
255,0,0,3,0,0,17,305,0,0,1,1,0,1,0,1,97,0,0,
274,0,0,3,0,0,45,307,0,0,0,0,0,1,0,
289,0,0,3,0,0,13,315,0,0,7,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,4,0,0,2,4,0,0,2,4,
0,0,2,4,0,0,
332,0,0,3,0,0,15,348,0,0,0,0,0,1,0,
347,0,0,4,0,0,17,392,0,0,1,1,0,1,0,1,97,0,0,
366,0,0,4,0,0,45,394,0,0,0,0,0,1,0,
381,0,0,4,0,0,13,402,0,0,7,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,4,0,0,2,4,0,0,2,4,
0,0,2,4,0,0,
424,0,0,4,0,0,15,434,0,0,0,0,0,1,0,
439,0,0,3,0,0,17,467,0,0,1,1,0,1,0,1,97,0,0,
458,0,0,3,0,0,45,469,0,0,0,0,0,1,0,
473,0,0,3,0,0,13,477,0,0,6,0,0,1,0,2,9,0,0,2,9,0,0,2,3,0,0,2,9,0,0,2,9,0,0,2,9,
0,0,
512,0,0,3,0,0,15,511,0,0,0,0,0,1,0,
527,0,0,5,109,0,3,614,0,0,7,7,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,4,0,0,1,4,0,0,1,
4,0,0,1,4,0,0,
570,0,0,3,0,0,17,661,0,0,1,1,0,1,0,1,97,0,0,
589,0,0,3,0,0,45,663,0,0,0,0,0,1,0,
604,0,0,3,0,0,13,667,0,0,7,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,4,0,0,2,4,0,0,2,4,
0,0,2,4,0,0,
647,0,0,6,0,0,17,704,0,0,1,1,0,1,0,1,97,0,0,
666,0,0,6,0,0,21,705,0,0,0,0,0,1,0,
681,0,0,7,0,0,31,711,0,0,0,0,0,1,0,
696,0,0,8,0,0,29,716,0,0,0,0,0,1,0,
711,0,0,3,0,0,15,730,0,0,0,0,0,1,0,
726,0,0,9,0,0,17,759,0,0,1,1,0,1,0,1,97,0,0,
745,0,0,9,0,0,45,761,0,0,0,0,0,1,0,
760,0,0,9,0,0,13,765,0,0,7,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,4,0,0,2,4,0,0,2,4,
0,0,2,4,0,0,
803,0,0,9,0,0,15,791,0,0,0,0,0,1,0,
818,0,0,10,0,0,17,828,0,0,1,1,0,1,0,1,97,0,0,
837,0,0,10,0,0,21,829,0,0,0,0,0,1,0,
852,0,0,11,0,0,31,836,0,0,0,0,0,1,0,
867,0,0,12,0,0,29,841,0,0,0,0,0,1,0,
882,0,0,13,0,0,17,926,0,0,1,1,0,1,0,1,97,0,0,
901,0,0,13,0,0,45,928,0,0,0,0,0,1,0,
916,0,0,13,0,0,13,929,0,0,1,0,0,1,0,2,9,0,0,
935,0,0,13,0,0,15,935,0,0,0,0,0,1,0,
950,0,0,14,0,0,24,943,0,0,1,1,0,1,0,1,97,0,0,
969,0,0,15,0,0,31,949,0,0,0,0,0,1,0,
984,0,0,16,0,0,29,956,0,0,0,0,0,1,0,
999,0,0,13,0,0,15,964,0,0,0,0,0,1,0,
1014,0,0,17,0,0,17,1009,0,0,1,1,0,1,0,1,97,0,0,
1033,0,0,17,0,0,45,1011,0,0,0,0,0,1,0,
1048,0,0,17,0,0,13,1012,0,0,7,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,4,0,0,
2,4,0,0,2,4,0,0,
};


#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <conio.h>

/* for oracle */
#include <sqlda.h>
#include <sqlca.h>
#include <sqlcpr.h>

void db_connect();
void sql_error(char *msg);

/* menu */
void main_options();
void view_food();
void view_food_all();
void view_food_search();
void view_menu();
void refresh_today_menu();
void add_food();
void delete_food();
void update_food();
void login();
void sign_up();
void refresh_today_menu();
void print_screen(char *fname);

#include <windows.h>
void gotoxy(int x, int y);
void getxy(int *x, int *y);
void clrscr(void);

/* EXEC SQL BEGIN DECLARE SECTION; */ 

/* VARCHAR uid[80]; */ 
struct { unsigned short len; unsigned char arr[80]; } uid;

/* VARCHAR pwd[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } pwd;

/* VARCHAR v_userId[50]; */ 
struct { unsigned short len; unsigned char arr[50]; } v_userId;

/* VARCHAR v_userPw[50]; */ 
struct { unsigned short len; unsigned char arr[50]; } v_userPw;

/* VARCHAR v_uname[30]; */ 
struct { unsigned short len; unsigned char arr[30]; } v_uname;

/* VARCHAR v_gender[6]; */ 
struct { unsigned short len; unsigned char arr[6]; } v_gender;

/* VARCHAR v_main_food_name[30]; */ 
struct { unsigned short len; unsigned char arr[30]; } v_main_food_name;

/* VARCHAR v_sub_food_name[30]; */ 
struct { unsigned short len; unsigned char arr[30]; } v_sub_food_name;

/* VARCHAR v_side_food_name[30]; */ 
struct { unsigned short len; unsigned char arr[30]; } v_side_food_name;

float v_height;
float v_weight;
float v_isAdmin;
/* EXEC SQL END DECLARE SECTION; */ 


#define getch() _getch()

void main()
{
    _putenv("NLS_LANG=American_America.KO16KSC5601"); // �ѱۻ��� �ʿ���

    db_connect();

    login();
}

void db_connect()
{
    /* ID */
    strcpy((char *)uid.arr, "a20193208@//sedb.deu.ac.kr:1521/orcl");
    uid.len = (short)strlen((char *)uid.arr);
    /* PW */
    strcpy((char *)pwd.arr, "20193208");
    pwd.len = (short)strlen((char *)pwd.arr);

    /* EXEC SQL CONNECT : uid IDENTIFIED BY : pwd; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )10;
    sqlstm.offset = (unsigned int  )5;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&uid;
    sqlstm.sqhstl[0] = (unsigned int  )82;
    sqlstm.sqhsts[0] = (         int  )82;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (         void  *)&pwd;
    sqlstm.sqhstl[1] = (unsigned int  )22;
    sqlstm.sqhsts[1] = (         int  )22;
    sqlstm.sqindv[1] = (         void  *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned int  )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlstm.sqlcmax = (unsigned int )100;
    sqlstm.sqlcmin = (unsigned int )2;
    sqlstm.sqlcincr = (unsigned int )1;
    sqlstm.sqlctimeout = (unsigned int )0;
    sqlstm.sqlcnowait = (unsigned int )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    if (sqlca.sqlcode != 0 && sqlca.sqlcode != -1405)
    {
        printf("\7Connect error: %s", sqlca.sqlerrm.sqlerrmc);
        getch();
        exit(-1);
    }

    printf("Oracle Connect SUCCESS by %s\n", uid.arr);
}

void sql_error(char *msg)
{
    char err_msg[128];
    size_t buf_len, msg_len;

    /* EXEC SQL WHENEVER SQLERROR CONTINUE; */ 


    printf("\n%s\n", msg);
    buf_len = sizeof(err_msg);
    sqlglm(err_msg, &buf_len, &msg_len);
    printf("%.*s\n", msg_len, err_msg);
    getch();

    /* EXEC SQL ROLLBACK WORK; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )36;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


}

/*---------------  print screen --------------------*/
#define STD_HANDLE GetStdHandle(STD_OUTPUT_HANDLE)

void gotoxy(int x, int y)
{
    COORD Cur = {(SHORT)x, (SHORT)y};

    SetConsoleCursorPosition(STD_HANDLE, Cur);
}

void getxy(int *x, int *y)
{
    CONSOLE_SCREEN_BUFFER_INFO Buf;

    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &Buf);
    *x = (int)Buf.dwCursorPosition.X;
    *y = (int)Buf.dwCursorPosition.Y;
}

void clrscr(void)
{
    COORD Cur = {0, 0};
    unsigned long dwLen;

    FillConsoleOutputCharacter(STD_HANDLE, ' ', 120 * 28, Cur, &dwLen);
    gotoxy(0, 0);
}

/*---------------------------------------------------------*/

/*------------------------- Manus ------------------------*/

void main_options()
{
    refresh_today_menu();
    char c;
    while (1) // 무한 루프
    {
        clrscr();                            // 화면 지우기
        print_screen("screen/scr_main.txt"); // 화면 출력
        gotoxy(3, 4);
        printf("                                    ");
        gotoxy(3, 4);
        printf("%s", v_main_food_name.arr);

        gotoxy(3, 5);
        printf("                                    ");
        gotoxy(3, 5);
        printf("%s", v_sub_food_name.arr);

        gotoxy(3, 6);
        printf("                                    ");
        gotoxy(3, 6);
        printf("%s", v_side_food_name.arr);

        gotoxy(7, 19); // 커서 위치 설정
        c = getchar(); // 사용자 입력 받기
        while (getchar() != '\n')
            ; // 입력 버퍼 비우기

        switch (c)
        {
        case '1':
            view_food(); // 음식 확인
            break;
        case '2':
            add_food(); // 음식 추가
            break;
        case '3':
            delete_food(); // 음식 삭제
            break;
        case '4':
            update_food(); // 음식 수정
            break;
        case '5':
            view_menu(); // 식단 확인
            break;
        case '6':
            refresh_today_menu(); // 오늘의 식단 새로 고침
            break;
        case '7':
            exit(0); // 종료
            break;
        default:
            clrscr();
            print_screen("screen/scr_main.txt");
            gotoxy(7, 22); // 커서 위치 설정
            printf("Invalid input\n");
            gotoxy(7, 19); // 커서 위치 설정
            continue;      // 잘못된 입력 시 계속 루프
        }
    }
}

void refresh_today_menu()
{
    /* EXEC SQL BEGIN DECLARE SECTION; */ 

    char sqlstmt[1024];
    /* EXEC SQL END DECLARE SECTION; */ 


    clrscr(); // 화면 클리어

    sprintf(sqlstmt, "SELECT fname FROM (SELECT fname FROM food_table WHERE ftype = 'Main' ORDER BY dbms_random.value) WHERE rownum = 1");
    /* EXEC SQL PREPARE S FROM : sqlstmt; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )51;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)sqlstmt;
    sqlstm.sqhstl[0] = (unsigned int  )1024;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    /* EXEC SQL DECLARE m1_cursor CURSOR FOR S; */ 

    /* EXEC SQL OPEN m1_cursor; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )70;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.sqlpfmem = (unsigned int  )0;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqcmod = (unsigned int )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    /* EXEC SQL FETCH m1_cursor INTO : v_main_food_name; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )85;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.sqlpfmem = (unsigned int  )0;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqfoff = (           int )0;
    sqlstm.sqfmod = (unsigned int )2;
    sqlstm.sqhstv[0] = (         void  *)&v_main_food_name;
    sqlstm.sqhstl[0] = (unsigned int  )32;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    if (sqlca.sqlcode == 1403)
    {
        return;
    }

    sprintf(sqlstmt, "SELECT fname FROM (SELECT fname FROM food_table WHERE ftype = 'Sub' ORDER BY dbms_random.value) WHERE rownum = 1");
    /* EXEC SQL PREPARE S FROM : sqlstmt; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )104;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)sqlstmt;
    sqlstm.sqhstl[0] = (unsigned int  )1024;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    /* EXEC SQL DECLARE m2_cursor CURSOR FOR S; */ 

    /* EXEC SQL OPEN m2_cursor; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )123;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.sqlpfmem = (unsigned int  )0;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqcmod = (unsigned int )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    /* EXEC SQL FETCH m2_cursor INTO : v_sub_food_name; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )138;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.sqlpfmem = (unsigned int  )0;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqfoff = (           int )0;
    sqlstm.sqfmod = (unsigned int )2;
    sqlstm.sqhstv[0] = (         void  *)&v_sub_food_name;
    sqlstm.sqhstl[0] = (unsigned int  )32;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    if (sqlca.sqlcode == 1403)
    {
        // 못찾음
        return;
    }

    sprintf(sqlstmt, "SELECT fname FROM (SELECT fname FROM food_table WHERE ftype = 'Side' ORDER BY dbms_random.value) WHERE rownum = 1");
    /* EXEC SQL PREPARE S FROM : sqlstmt; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )157;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)sqlstmt;
    sqlstm.sqhstl[0] = (unsigned int  )1024;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    /* EXEC SQL DECLARE m3_cursor CURSOR FOR S; */ 

    /* EXEC SQL OPEN m3_cursor; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )176;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.sqlpfmem = (unsigned int  )0;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqcmod = (unsigned int )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    /* EXEC SQL FETCH m3_cursor INTO : v_side_food_name; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )191;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.sqlpfmem = (unsigned int  )0;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqfoff = (           int )0;
    sqlstm.sqfmod = (unsigned int )2;
    sqlstm.sqhstv[0] = (         void  *)&v_side_food_name;
    sqlstm.sqhstl[0] = (unsigned int  )32;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    if (sqlca.sqlcode == 1403)
    {
        // 못찾음
        return;
    }

    v_main_food_name.arr[v_main_food_name.len] = '\0';
    v_sub_food_name.arr[v_sub_food_name.len] = '\0';
    v_side_food_name.arr[v_side_food_name.len] = '\0';

    printf("v_main_food_name : %s\nv_sub_food_name : %s\nv_side_food_name : %s\n", v_main_food_name.arr, v_sub_food_name.arr, v_side_food_name.arr);

    /* EXEC SQL CLOSE m1_cursor; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )210;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    /* EXEC SQL CLOSE m2_cursor; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )225;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    /* EXEC SQL CLOSE m3_cursor; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )240;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


}

void view_food()
{
    clrscr();

    print_screen("screen/scr_select.txt");

    gotoxy(11, 16);

    char c;

    while (1)
    {
        c = getchar();
        while (getchar() != '\n')
            ;

        switch (c)
        {
        case '1':
            view_food_all();
            break;
        case '2':
            view_food_search();
            break;
        case '3':
            return;
        default:
            clrscr();
            print_screen("screen/scr_select.txt");
            gotoxy(11, 24); // 커서 위치 설정
            printf("Invalid input\n");
            gotoxy(11, 16); // 커서 위치 설정
            continue;       // 잘못된 입력 시 계속 루프
        }
    }
}

#define PAGE_NUM 5
void view_food_all()
{
    /* EXEC SQL BEGIN DECLARE SECTION; */ 

    char sqlstmt[1024];
    /* varchar v_category[255]; */ 
struct { unsigned short len; unsigned char arr[255]; } v_category;

    /* varchar v_food_name[255]; */ 
struct { unsigned short len; unsigned char arr[255]; } v_food_name;

    /* varchar v_type[255]; */ 
struct { unsigned short len; unsigned char arr[255]; } v_type;

    float v_calorie;
    float v_carbo;
    float v_protein;
    float v_fat;
    /* EXEC SQL END DECLARE SECTION; */ 


    int count = 0;
    char c;
    clrscr();

    /* 고정 SQL 쿼리로 커서 선언 */
    sprintf(sqlstmt, "SELECT fcategory, fname, ftype, calorie, carbo, protein, fat FROM food_table");
    /* EXEC SQL PREPARE S FROM : sqlstmt; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )255;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)sqlstmt;
    sqlstm.sqhstl[0] = (unsigned int  )1024;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    /* EXEC SQL DECLARE c_cursor CURSOR FOR S; */ 

    /* EXEC SQL OPEN c_cursor; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )274;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.sqlpfmem = (unsigned int  )0;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqcmod = (unsigned int )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    printf(" %-10s %-20s %-10s %-10s %-10s %-10s %-10s\n",
           "Category", "Food Name", "Type", "Calorie", "Carbo", "Protein", "Fat");
    printf("-------------------------------------------------------------------------------\n");

    while (1)
    {
        /* EXEC SQL FETCH c_cursor INTO : v_category, : v_food_name, : v_type, : v_calorie, : v_carbo, : v_protein, : v_fat; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 7;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )289;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqfoff = (           int )0;
        sqlstm.sqfmod = (unsigned int )2;
        sqlstm.sqhstv[0] = (         void  *)&v_category;
        sqlstm.sqhstl[0] = (unsigned int  )257;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&v_food_name;
        sqlstm.sqhstl[1] = (unsigned int  )257;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)&v_type;
        sqlstm.sqhstl[2] = (unsigned int  )257;
        sqlstm.sqhsts[2] = (         int  )0;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqhstv[3] = (         void  *)&v_calorie;
        sqlstm.sqhstl[3] = (unsigned int  )sizeof(float);
        sqlstm.sqhsts[3] = (         int  )0;
        sqlstm.sqindv[3] = (         void  *)0;
        sqlstm.sqinds[3] = (         int  )0;
        sqlstm.sqharm[3] = (unsigned int  )0;
        sqlstm.sqadto[3] = (unsigned short )0;
        sqlstm.sqtdso[3] = (unsigned short )0;
        sqlstm.sqhstv[4] = (         void  *)&v_carbo;
        sqlstm.sqhstl[4] = (unsigned int  )sizeof(float);
        sqlstm.sqhsts[4] = (         int  )0;
        sqlstm.sqindv[4] = (         void  *)0;
        sqlstm.sqinds[4] = (         int  )0;
        sqlstm.sqharm[4] = (unsigned int  )0;
        sqlstm.sqadto[4] = (unsigned short )0;
        sqlstm.sqtdso[4] = (unsigned short )0;
        sqlstm.sqhstv[5] = (         void  *)&v_protein;
        sqlstm.sqhstl[5] = (unsigned int  )sizeof(float);
        sqlstm.sqhsts[5] = (         int  )0;
        sqlstm.sqindv[5] = (         void  *)0;
        sqlstm.sqinds[5] = (         int  )0;
        sqlstm.sqharm[5] = (unsigned int  )0;
        sqlstm.sqadto[5] = (unsigned short )0;
        sqlstm.sqtdso[5] = (unsigned short )0;
        sqlstm.sqhstv[6] = (         void  *)&v_fat;
        sqlstm.sqhstl[6] = (unsigned int  )sizeof(float);
        sqlstm.sqhsts[6] = (         int  )0;
        sqlstm.sqindv[6] = (         void  *)0;
        sqlstm.sqinds[6] = (         int  )0;
        sqlstm.sqharm[6] = (unsigned int  )0;
        sqlstm.sqadto[6] = (unsigned short )0;
        sqlstm.sqtdso[6] = (unsigned short )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqphss = sqlstm.sqhsts;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqpins = sqlstm.sqinds;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlstm.sqpadto = sqlstm.sqadto;
        sqlstm.sqptdso = sqlstm.sqtdso;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}

 // 커서에 저장

        if (sqlca.sqlcode == 1403)
        { // 더 이상 데이터가 없으면 종료
            break;
        }

        v_category.arr[v_category.len] = '\0';
        v_food_name.arr[v_food_name.len] = '\0';
        v_type.arr[v_type.len] = '\0';

        printf(" %-10s %-20s %-10s %-10.1f %-10.1f %-10.1f %-10.1f\n",
               v_category.arr, v_food_name.arr, v_type.arr, v_calorie, v_carbo, v_protein, v_fat);
        ++count;

        if (count == PAGE_NUM)
        {
            printf("\n\n                                          Hit any key for next page\n");
            count = 0;
            getch();

            gotoxy(0, 2); // 이전 데이터 클리어
            for (int i = 0; i < PAGE_NUM; i++)
            {
                printf("                                                                                               \n");
            }
            gotoxy(0, 2); // 새 페이지 시작
        }
    }

    printf("\n");
    printf("Total matched tuples: %d\n", sqlca.sqlerrd[2]);
    printf("Press Q : Go back / Press any key : Exit Program\n");
    /* EXEC SQL CLOSE c_cursor; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 7;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )332;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    c = getch(); // 종료

    if (c == 'q' || c == 'Q')
    {
        return;
    }
    else
    {
        exit(0);
    }
}

void view_food_search()
{
    /* EXEC SQL BEGIN DECLARE SECTION; */ 

    /* varchar v_category[255]; */ 
struct { unsigned short len; unsigned char arr[255]; } v_category;

    /* varchar v_food_name[255]; */ 
struct { unsigned short len; unsigned char arr[255]; } v_food_name;

    /* varchar v_type[255]; */ 
struct { unsigned short len; unsigned char arr[255]; } v_type;

    float v_carbo;
    float v_protein;
    float v_fat;
    float v_calorie;
    char sqlstmt[1024];
    /* EXEC SQL END DECLARE SECTION; */ 


    int count = 0;
    char c;

    clrscr();

    char input_category[255];
    char input_food_name[255];

    // 사용자 입력 받기
    printf("Enter category: ");
    gets(input_category); // 사용자로부터 카테고리 입력받기
    printf("Enter menu name (or part of it): ");
    gets(input_food_name); // 사용자로부터 메뉴 이름 입력받기

    sprintf(sqlstmt,
            "SELECT fcategory, fname, ftype ,calorie, carbo, protein, fat FROM food_table WHERE LOWER(fcategory) LIKE LOWER('%%%s%%') AND LOWER(fname) LIKE LOWER('%%%s%%')", input_category, input_food_name);

    /* EXEC SQL PREPARE SEARCH FROM : sqlstmt; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 7;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )347;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)sqlstmt;
    sqlstm.sqhstl[0] = (unsigned int  )1024;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    /* EXEC SQL DECLARE s_cursor CURSOR FOR SEARCH; */ 

    /* EXEC SQL OPEN s_cursor; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 7;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )366;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.sqlpfmem = (unsigned int  )0;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqcmod = (unsigned int )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    printf(" %-10s %-20s %-10s %-10s %-10s %-10s %-10s\n",
           "Category", "Food Name", "Type", "Calorie", "Carbo", "Protein", "Fat");
    printf("-------------------------------------------------------------------------------\n");

    while (1)
    {
        /* EXEC SQL FETCH s_cursor INTO : v_category, : v_food_name, : v_type, : v_carbo, : v_protein, : v_fat, : v_calorie; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 7;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )381;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqfoff = (           int )0;
        sqlstm.sqfmod = (unsigned int )2;
        sqlstm.sqhstv[0] = (         void  *)&v_category;
        sqlstm.sqhstl[0] = (unsigned int  )257;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&v_food_name;
        sqlstm.sqhstl[1] = (unsigned int  )257;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)&v_type;
        sqlstm.sqhstl[2] = (unsigned int  )257;
        sqlstm.sqhsts[2] = (         int  )0;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqhstv[3] = (         void  *)&v_carbo;
        sqlstm.sqhstl[3] = (unsigned int  )sizeof(float);
        sqlstm.sqhsts[3] = (         int  )0;
        sqlstm.sqindv[3] = (         void  *)0;
        sqlstm.sqinds[3] = (         int  )0;
        sqlstm.sqharm[3] = (unsigned int  )0;
        sqlstm.sqadto[3] = (unsigned short )0;
        sqlstm.sqtdso[3] = (unsigned short )0;
        sqlstm.sqhstv[4] = (         void  *)&v_protein;
        sqlstm.sqhstl[4] = (unsigned int  )sizeof(float);
        sqlstm.sqhsts[4] = (         int  )0;
        sqlstm.sqindv[4] = (         void  *)0;
        sqlstm.sqinds[4] = (         int  )0;
        sqlstm.sqharm[4] = (unsigned int  )0;
        sqlstm.sqadto[4] = (unsigned short )0;
        sqlstm.sqtdso[4] = (unsigned short )0;
        sqlstm.sqhstv[5] = (         void  *)&v_fat;
        sqlstm.sqhstl[5] = (unsigned int  )sizeof(float);
        sqlstm.sqhsts[5] = (         int  )0;
        sqlstm.sqindv[5] = (         void  *)0;
        sqlstm.sqinds[5] = (         int  )0;
        sqlstm.sqharm[5] = (unsigned int  )0;
        sqlstm.sqadto[5] = (unsigned short )0;
        sqlstm.sqtdso[5] = (unsigned short )0;
        sqlstm.sqhstv[6] = (         void  *)&v_calorie;
        sqlstm.sqhstl[6] = (unsigned int  )sizeof(float);
        sqlstm.sqhsts[6] = (         int  )0;
        sqlstm.sqindv[6] = (         void  *)0;
        sqlstm.sqinds[6] = (         int  )0;
        sqlstm.sqharm[6] = (unsigned int  )0;
        sqlstm.sqadto[6] = (unsigned short )0;
        sqlstm.sqtdso[6] = (unsigned short )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqphss = sqlstm.sqhsts;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqpins = sqlstm.sqinds;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlstm.sqpadto = sqlstm.sqadto;
        sqlstm.sqptdso = sqlstm.sqtdso;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



        if (sqlca.sqlcode == 1403)
        { // 더 이상 데이터가 없으면 종료
            break;
        }

        v_category.arr[v_category.len] = '\0';
        v_food_name.arr[v_food_name.len] = '\0';
        v_type.arr[v_type.len] = '\0';

        printf(" %-10s %-20s %-10s %-10.1f %-10.1f %-10.1f %-10.1f\n",
               v_category.arr, v_food_name.arr, v_type.arr, v_calorie, v_carbo, v_protein, v_fat);
        ++count;

        if (count == PAGE_NUM)
        {
            printf("\n\n                                          Hit any key for next page\n");
            count = 0;
            getch();
            gotoxy(0, 2); // 이전 데이터 클리어
            for (int i = 0; i < PAGE_NUM; i++)
            {
                printf("                                                                                               \n");
            }
            gotoxy(0, 2); // 새 페이지 시작
        }
    }

    printf("\n");
    printf("Total matched tuples: %d\n", sqlca.sqlerrd[2]);
    printf("Press Q : Go back / Press any key : Exit Program\n");
    /* EXEC SQL CLOSE s_cursor; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 7;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )424;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    c = getch(); // 종료

    if (c == 'q' || c == 'Q')
    {
        return;
    }
    else
    {
        exit(0);
    }
}

void view_menu()
{
    /* EXEC SQL BEGIN DECLARE SECTION; */ 

    char sqlstmt[1024];
    /* varchar v_mDate[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } v_mDate;

    /* varchar v_mTime[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } v_mTime;

    int v_menuID;
    /* varchar v_fnameMain[30]; */ 
struct { unsigned short len; unsigned char arr[30]; } v_fnameMain;

    /* varchar v_fnameSub[30]; */ 
struct { unsigned short len; unsigned char arr[30]; } v_fnameSub;

    /* varchar v_fnameSide[30]; */ 
struct { unsigned short len; unsigned char arr[30]; } v_fnameSide;

    /* EXEC SQL END DECLARE SECTION; */ 


    int count = 0;
    char c;

    clrscr();

    sprintf(sqlstmt,
            "SELECT m.mDate, m.mTime, m.menuID, mt.fnameMain, mt.fnameSub, mt.fnameSide FROM composition_menu_table m JOIN menu_table mt ON m.menuID = mt.menuID WHERE mt.userID = '%s' ORDER BY m.mDate, m.mTime", v_userId.arr);
    /* EXEC SQL PREPARE S FROM : sqlstmt; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 7;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )439;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)sqlstmt;
    sqlstm.sqhstl[0] = (unsigned int  )1024;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    /* EXEC SQL DECLARE v_cursor CURSOR FOR S; */ 

    /* EXEC SQL OPEN v_cursor; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 7;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )458;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.sqlpfmem = (unsigned int  )0;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqcmod = (unsigned int )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    printf(" %-15s %-10s %-10s %-20s %-20s %-20s\n",
           "Date", "Time", "MenuID", "Main Dish", "Sub Dish", "Side Dish");
    printf("-------------------------------------------------------------------------------\n");

    while (1)
    {
        /* EXEC SQL FETCH v_cursor INTO : v_mDate, : v_mTime, : v_menuID, : v_fnameMain, : v_fnameSub, : v_fnameSide; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 7;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )473;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqfoff = (           int )0;
        sqlstm.sqfmod = (unsigned int )2;
        sqlstm.sqhstv[0] = (         void  *)&v_mDate;
        sqlstm.sqhstl[0] = (unsigned int  )22;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&v_mTime;
        sqlstm.sqhstl[1] = (unsigned int  )12;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)&v_menuID;
        sqlstm.sqhstl[2] = (unsigned int  )sizeof(int);
        sqlstm.sqhsts[2] = (         int  )0;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqhstv[3] = (         void  *)&v_fnameMain;
        sqlstm.sqhstl[3] = (unsigned int  )32;
        sqlstm.sqhsts[3] = (         int  )0;
        sqlstm.sqindv[3] = (         void  *)0;
        sqlstm.sqinds[3] = (         int  )0;
        sqlstm.sqharm[3] = (unsigned int  )0;
        sqlstm.sqadto[3] = (unsigned short )0;
        sqlstm.sqtdso[3] = (unsigned short )0;
        sqlstm.sqhstv[4] = (         void  *)&v_fnameSub;
        sqlstm.sqhstl[4] = (unsigned int  )32;
        sqlstm.sqhsts[4] = (         int  )0;
        sqlstm.sqindv[4] = (         void  *)0;
        sqlstm.sqinds[4] = (         int  )0;
        sqlstm.sqharm[4] = (unsigned int  )0;
        sqlstm.sqadto[4] = (unsigned short )0;
        sqlstm.sqtdso[4] = (unsigned short )0;
        sqlstm.sqhstv[5] = (         void  *)&v_fnameSide;
        sqlstm.sqhstl[5] = (unsigned int  )32;
        sqlstm.sqhsts[5] = (         int  )0;
        sqlstm.sqindv[5] = (         void  *)0;
        sqlstm.sqinds[5] = (         int  )0;
        sqlstm.sqharm[5] = (unsigned int  )0;
        sqlstm.sqadto[5] = (unsigned short )0;
        sqlstm.sqtdso[5] = (unsigned short )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqphss = sqlstm.sqhsts;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqpins = sqlstm.sqinds;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlstm.sqpadto = sqlstm.sqadto;
        sqlstm.sqptdso = sqlstm.sqtdso;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



        if (sqlca.sqlcode != 0)
        {
            break;
        }

        v_mDate.arr[v_mDate.len] = '\0';
        v_mTime.arr[v_mTime.len] = '\0';
        v_fnameMain.arr[v_fnameMain.len] = '\0';
        v_fnameSide.arr[v_fnameSide.len] = '\0';

        printf(" %-15s %-10s %-10d %-20s %-20s\n",
               v_mDate.arr, v_mTime.arr, v_menuID, v_fnameMain.arr, v_fnameSide.arr);
        ++count;

        if (count == PAGE_NUM)
        {
            printf("\n\n                                          Hit any key for next page\n");
            count = 0;
            getch();

            gotoxy(0, 2);
            for (int i = 0; i < PAGE_NUM; i++)
            {
                printf("                                                                                               \n");
            }
            gotoxy(0, 2);
        }
    }

    printf("\n");
    printf("Total matched tuples: %d\n", sqlca.sqlerrd[2]);
    printf("Press Q : Go back / Press any key : Exit Program\n");
    /* EXEC SQL CLOSE c_cursor; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 7;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )512;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    c = getch();

    if (c == 'q' || c == 'Q')
    {
        return;
    }
    else
    {
        exit(0);
    }
}

void add_food()
{
    /* EXEC SQL BEGIN DECLARE SECTION; */ 

    /* varchar v_category1[255]; */ 
struct { unsigned short len; unsigned char arr[255]; } v_category1;
 // Western, Korean, Japanese, Chinese
    /* varchar v_category2[255]; */ 
struct { unsigned short len; unsigned char arr[255]; } v_category2;
 // Main, Sub, Side
    /* varchar v_menu_name[255]; */ 
struct { unsigned short len; unsigned char arr[255]; } v_menu_name;

    float v_calorie;
    float v_carbo;
    float v_protein;
    float v_fat;
    /* varchar v_userId[255]; */ 
struct { unsigned short len; unsigned char arr[255]; } v_userId;
 // 사용자 ID 추가
    /* EXEC SQL END DECLARE SECTION; */ 


    clrscr();

    print_screen("screen/scr_insert.txt");

    while (1)
    {
        gotoxy(14, 4); // "카테고리 1:"
        gets((char *)v_category1.arr);
        v_category1.len = (short)strlen((char *)v_category1.arr);

        // 카테고리 1 입력 중 범주에 벗어난 값이 입력되면 오류 메시지 출력
        if (strcmp((char *)v_category1.arr, "Western") == 0 ||
            strcmp((char *)v_category1.arr, "Korean") == 0 ||
            strcmp((char *)v_category1.arr, "Japanese") == 0 ||
            strcmp((char *)v_category1.arr, "Chinese") == 0)
        {
            // 오류 메시지 삭제
            gotoxy(0, 21);
            printf("                                                       "); // 이전 입력 삭제
            break;
        }

        gotoxy(0, 21); // 오류 메시지 출력
        printf("The category you entered is not valid. Please re-enter.");
        gotoxy(14, 4);                                             // 입력 위치 초기화
        printf("                                               "); // 이전 입력 삭제
    }

    while (1)
    {
        gotoxy(14, 7); // "카테고리 2:"
        gets((char *)v_category2.arr);
        v_category2.len = (short)strlen((char *)v_category2.arr);

        // 카테고리 2 입력 중 범주에 벗어난 값이 입력되면 오류 메시지 출력
        if (strcmp((char *)v_category2.arr, "Main") == 0 ||
            strcmp((char *)v_category2.arr, "Sub") == 0 ||
            strcmp((char *)v_category2.arr, "Side") == 0)
        {
            // 오류 메시지 삭제
            gotoxy(0, 21);
            printf("                                                   "); // 이전 입력 삭제
            break;
        }

        gotoxy(0, 21); // 오류 메시지 출력
        printf("The type you entered is not valid. Please re-enter.");
        gotoxy(14, 7);                                        // 입력 위치 초기화
        printf("                                          "); // 이전 입력 삭제
    }

    gotoxy(14, 10); // "메뉴 이름:"
    gets((char *)v_menu_name.arr);
    v_menu_name.len = (short)strlen((char *)v_menu_name.arr);

    gotoxy(14, 12); // "칼로리:"
    scanf("%f", &v_calorie);
    while (getchar() != '\n')
        ;

    gotoxy(14, 14); // "탄수화물:"
    scanf("%f", &v_carbo);
    while (getchar() != '\n')
        ;

    gotoxy(14, 16); // "단백질:"
    scanf("%f", &v_protein);
    while (getchar() != '\n')
        ;

    gotoxy(14, 18); // "지방:"
    scanf("%f", &v_fat);
    while (getchar() != '\n')
        ;

    // 데이터베이스 삽입
    /* EXEC SQL INSERT INTO FOOD_TABLE(fcategory, ftype, fname, calorie, carbo, protein, fat)
        VALUES( : v_category1, : v_category2, : v_menu_name, : v_calorie, : v_carbo, : v_protein, : v_fat); */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 7;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "insert into FOOD_TABLE (fcategory,ftype,fname,calorie,car\
bo,protein,fat) values (:b0,:b1,:b2,:b3,:b4,:b5,:b6)";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )527;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&v_category1;
    sqlstm.sqhstl[0] = (unsigned int  )257;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (         void  *)&v_category2;
    sqlstm.sqhstl[1] = (unsigned int  )257;
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         void  *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned int  )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (         void  *)&v_menu_name;
    sqlstm.sqhstl[2] = (unsigned int  )257;
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         void  *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned int  )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqhstv[3] = (         void  *)&v_calorie;
    sqlstm.sqhstl[3] = (unsigned int  )sizeof(float);
    sqlstm.sqhsts[3] = (         int  )0;
    sqlstm.sqindv[3] = (         void  *)0;
    sqlstm.sqinds[3] = (         int  )0;
    sqlstm.sqharm[3] = (unsigned int  )0;
    sqlstm.sqadto[3] = (unsigned short )0;
    sqlstm.sqtdso[3] = (unsigned short )0;
    sqlstm.sqhstv[4] = (         void  *)&v_carbo;
    sqlstm.sqhstl[4] = (unsigned int  )sizeof(float);
    sqlstm.sqhsts[4] = (         int  )0;
    sqlstm.sqindv[4] = (         void  *)0;
    sqlstm.sqinds[4] = (         int  )0;
    sqlstm.sqharm[4] = (unsigned int  )0;
    sqlstm.sqadto[4] = (unsigned short )0;
    sqlstm.sqtdso[4] = (unsigned short )0;
    sqlstm.sqhstv[5] = (         void  *)&v_protein;
    sqlstm.sqhstl[5] = (unsigned int  )sizeof(float);
    sqlstm.sqhsts[5] = (         int  )0;
    sqlstm.sqindv[5] = (         void  *)0;
    sqlstm.sqinds[5] = (         int  )0;
    sqlstm.sqharm[5] = (unsigned int  )0;
    sqlstm.sqadto[5] = (unsigned short )0;
    sqlstm.sqtdso[5] = (unsigned short )0;
    sqlstm.sqhstv[6] = (         void  *)&v_fat;
    sqlstm.sqhstl[6] = (unsigned int  )sizeof(float);
    sqlstm.sqhsts[6] = (         int  )0;
    sqlstm.sqindv[6] = (         void  *)0;
    sqlstm.sqinds[6] = (         int  )0;
    sqlstm.sqharm[6] = (unsigned int  )0;
    sqlstm.sqadto[6] = (unsigned short )0;
    sqlstm.sqtdso[6] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    if (sqlca.sqlcode == 0)
    {
        gotoxy(0, 21); // 성공 메시지 출력 위치
        printf("Data added successfully.");
    }
    else
    {
        gotoxy(0, 21);
        printf("Error adding data: %s\n", sqlca.sqlerrm.sqlerrmc);
    }

    gotoxy(0, 23);
    printf("Press Enter to return to main menu.");
    getch();

    clrscr();       // 화면 초기화
    main_options(); // 메인 메뉴로 돌아가기
}

void delete_food()
{
    /* EXEC SQL BEGIN DECLARE SECTION; */ 

    /* varchar v_category[255]; */ 
struct { unsigned short len; unsigned char arr[255]; } v_category;

    /* varchar v_food_name[255]; */ 
struct { unsigned short len; unsigned char arr[255]; } v_food_name;

    /* varchar v_type[255]; */ 
struct { unsigned short len; unsigned char arr[255]; } v_type;

    /* varchar v_userid[255]; */ 
struct { unsigned short len; unsigned char arr[255]; } v_userid;

    float v_carbo;
    float v_protein;
    float v_fat;
    float v_calorie;

    char sqlstmt[1024];
    /* EXEC SQL END DECLARE SECTION; */ 


    clrscr(); // 화면 클리어

    print_screen("screen/scr_delete.txt");

    char input_delete_name[20];
    gotoxy(37, 3);
    gets(input_delete_name);

    sprintf(sqlstmt, "SELECT fcategory, fname, ftype, calorie, carbo, protein, fat FROM food_table where fname = '%s'", input_delete_name);

    /* EXEC SQL PREPARE S FROM : sqlstmt; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 7;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )570;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)sqlstmt;
    sqlstm.sqhstl[0] = (unsigned int  )1024;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    /* EXEC SQL DECLARE u_cursor CURSOR FOR S; */ 

    /* EXEC SQL OPEN u_cursor; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 7;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )589;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.sqlpfmem = (unsigned int  )0;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqcmod = (unsigned int )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    while (1)
    {
        /* EXEC SQL FETCH u_cursor INTO : v_category, : v_food_name, : v_type, : v_calorie, : v_carbo, : v_protein, : v_fat; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 7;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )604;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqfoff = (           int )0;
        sqlstm.sqfmod = (unsigned int )2;
        sqlstm.sqhstv[0] = (         void  *)&v_category;
        sqlstm.sqhstl[0] = (unsigned int  )257;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&v_food_name;
        sqlstm.sqhstl[1] = (unsigned int  )257;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)&v_type;
        sqlstm.sqhstl[2] = (unsigned int  )257;
        sqlstm.sqhsts[2] = (         int  )0;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqhstv[3] = (         void  *)&v_calorie;
        sqlstm.sqhstl[3] = (unsigned int  )sizeof(float);
        sqlstm.sqhsts[3] = (         int  )0;
        sqlstm.sqindv[3] = (         void  *)0;
        sqlstm.sqinds[3] = (         int  )0;
        sqlstm.sqharm[3] = (unsigned int  )0;
        sqlstm.sqadto[3] = (unsigned short )0;
        sqlstm.sqtdso[3] = (unsigned short )0;
        sqlstm.sqhstv[4] = (         void  *)&v_carbo;
        sqlstm.sqhstl[4] = (unsigned int  )sizeof(float);
        sqlstm.sqhsts[4] = (         int  )0;
        sqlstm.sqindv[4] = (         void  *)0;
        sqlstm.sqinds[4] = (         int  )0;
        sqlstm.sqharm[4] = (unsigned int  )0;
        sqlstm.sqadto[4] = (unsigned short )0;
        sqlstm.sqtdso[4] = (unsigned short )0;
        sqlstm.sqhstv[5] = (         void  *)&v_protein;
        sqlstm.sqhstl[5] = (unsigned int  )sizeof(float);
        sqlstm.sqhsts[5] = (         int  )0;
        sqlstm.sqindv[5] = (         void  *)0;
        sqlstm.sqinds[5] = (         int  )0;
        sqlstm.sqharm[5] = (unsigned int  )0;
        sqlstm.sqadto[5] = (unsigned short )0;
        sqlstm.sqtdso[5] = (unsigned short )0;
        sqlstm.sqhstv[6] = (         void  *)&v_fat;
        sqlstm.sqhstl[6] = (unsigned int  )sizeof(float);
        sqlstm.sqhsts[6] = (         int  )0;
        sqlstm.sqindv[6] = (         void  *)0;
        sqlstm.sqinds[6] = (         int  )0;
        sqlstm.sqharm[6] = (unsigned int  )0;
        sqlstm.sqadto[6] = (unsigned short )0;
        sqlstm.sqtdso[6] = (unsigned short )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqphss = sqlstm.sqhsts;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqpins = sqlstm.sqinds;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlstm.sqpadto = sqlstm.sqadto;
        sqlstm.sqptdso = sqlstm.sqtdso;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



        if (sqlca.sqlcode == 1403)
        {
            // 못찾음
            // 더 이상 데이터가 없으면 종료
            break;
        }

        v_category.arr[v_category.len] = '\0';
        v_food_name.arr[v_food_name.len] = '\0';
        v_type.arr[v_type.len] = '\0';

        gotoxy(10, 7);
        printf("%s\n", v_food_name.arr);
        gotoxy(10, 8);
        printf("%s\n", v_category.arr);
        gotoxy(10, 9);
        printf("%s\n", v_type.arr);
        gotoxy(10, 10);
        printf("%.1f\n", v_carbo);
        gotoxy(10, 11);
        printf("%.1f\n", v_protein);
        gotoxy(10, 12);
        printf("%.1f\n", v_fat);
        gotoxy(10, 13);
        printf("%.1f\n", v_calorie);

        // 삭제할지 여부 묻기
        char confirmation;
        gotoxy(0, 19);
        printf("Do you want to delete this food item? (y/n): ");
        scanf(" %c", &confirmation); // 공백 문자를 처리하기 위해 앞에 공백을 추가

        if (confirmation == 'y' || confirmation == 'Y')
        {
            sprintf(sqlstmt, "DELETE FROM food_table WHERE fname = '%s'", input_delete_name);
            /* EXEC SQL PREPARE stmt_delete FROM : sqlstmt; */ 

{
            struct sqlexd sqlstm;
            sqlstm.sqlvsn = 13;
            sqlstm.arrsiz = 7;
            sqlstm.sqladtp = &sqladt;
            sqlstm.sqltdsp = &sqltds;
            sqlstm.stmt = "";
            sqlstm.iters = (unsigned int  )1;
            sqlstm.offset = (unsigned int  )647;
            sqlstm.cud = sqlcud0;
            sqlstm.sqlest = (unsigned char  *)&sqlca;
            sqlstm.sqlety = (unsigned short)4352;
            sqlstm.occurs = (unsigned int  )0;
            sqlstm.sqhstv[0] = (         void  *)sqlstmt;
            sqlstm.sqhstl[0] = (unsigned int  )1024;
            sqlstm.sqhsts[0] = (         int  )0;
            sqlstm.sqindv[0] = (         void  *)0;
            sqlstm.sqinds[0] = (         int  )0;
            sqlstm.sqharm[0] = (unsigned int  )0;
            sqlstm.sqadto[0] = (unsigned short )0;
            sqlstm.sqtdso[0] = (unsigned short )0;
            sqlstm.sqphsv = sqlstm.sqhstv;
            sqlstm.sqphsl = sqlstm.sqhstl;
            sqlstm.sqphss = sqlstm.sqhsts;
            sqlstm.sqpind = sqlstm.sqindv;
            sqlstm.sqpins = sqlstm.sqinds;
            sqlstm.sqparm = sqlstm.sqharm;
            sqlstm.sqparc = sqlstm.sqharc;
            sqlstm.sqpadto = sqlstm.sqadto;
            sqlstm.sqptdso = sqlstm.sqtdso;
            sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


            /* EXEC SQL EXECUTE stmt_delete; */ 

{
            struct sqlexd sqlstm;
            sqlstm.sqlvsn = 13;
            sqlstm.arrsiz = 7;
            sqlstm.sqladtp = &sqladt;
            sqlstm.sqltdsp = &sqltds;
            sqlstm.stmt = "";
            sqlstm.iters = (unsigned int  )1;
            sqlstm.offset = (unsigned int  )666;
            sqlstm.cud = sqlcud0;
            sqlstm.sqlest = (unsigned char  *)&sqlca;
            sqlstm.sqlety = (unsigned short)4352;
            sqlstm.occurs = (unsigned int  )0;
            sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



            if (sqlca.sqlcode != 0)
            {
                gotoxy(0, 21);
                printf("Error: Unable to delete food. SQLCODE: %d\n", sqlca.sqlcode);
                /* EXEC SQL ROLLBACK WORK; */ 

{
                struct sqlexd sqlstm;
                sqlstm.sqlvsn = 13;
                sqlstm.arrsiz = 7;
                sqlstm.sqladtp = &sqladt;
                sqlstm.sqltdsp = &sqltds;
                sqlstm.iters = (unsigned int  )1;
                sqlstm.offset = (unsigned int  )681;
                sqlstm.cud = sqlcud0;
                sqlstm.sqlest = (unsigned char  *)&sqlca;
                sqlstm.sqlety = (unsigned short)4352;
                sqlstm.occurs = (unsigned int  )0;
                sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


                getch();
                return;
            }

            /* EXEC SQL COMMIT WORK; */ 

{
            struct sqlexd sqlstm;
            sqlstm.sqlvsn = 13;
            sqlstm.arrsiz = 7;
            sqlstm.sqladtp = &sqladt;
            sqlstm.sqltdsp = &sqltds;
            sqlstm.iters = (unsigned int  )1;
            sqlstm.offset = (unsigned int  )696;
            sqlstm.cud = sqlcud0;
            sqlstm.sqlest = (unsigned char  *)&sqlca;
            sqlstm.sqlety = (unsigned short)4352;
            sqlstm.occurs = (unsigned int  )0;
            sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


            gotoxy(0, 21);
            printf("Food '%s' delete successfully.\n", input_delete_name);
            getch();
            break;
        }
        else
        {
            printf("Food deletion cancelled.\n");
            break;
        }
    }

    // 커서 닫기
    /* EXEC SQL CLOSE u_cursor; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 7;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )711;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    getch(); // 종료 대기
}

void update_food()
{
    /* EXEC SQL BEGIN DECLARE SECTION; */ 

    /* varchar v_category[255]; */ 
struct { unsigned short len; unsigned char arr[255]; } v_category;

    /* varchar v_food_name[255]; */ 
struct { unsigned short len; unsigned char arr[255]; } v_food_name;

    /* varchar v_type[255]; */ 
struct { unsigned short len; unsigned char arr[255]; } v_type;

    float v_carbo;
    float v_protein;
    float v_fat;
    float v_calorie;

    char sqlstmt[1024];
    /* EXEC SQL END DECLARE SECTION; */ 


    clrscr();

    print_screen("screen/scr_update.txt");

    char input_update_name[20];
    gotoxy(32, 3);
    gets(input_update_name);

    sprintf(sqlstmt, "SELECT fcategory, fname, ftype, calorie, carbo, protein, fat FROM food_table where fname = '%s'", input_update_name);

    /* EXEC SQL PREPARE UPDATE FROM : sqlstmt; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 7;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )726;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)sqlstmt;
    sqlstm.sqhstl[0] = (unsigned int  )1024;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    /* EXEC SQL DECLARE update_cursor CURSOR FOR UPDATE; */ 

    /* EXEC SQL OPEN update_cursor; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 7;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )745;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.sqlpfmem = (unsigned int  )0;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqcmod = (unsigned int )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    while (1)
    {
        /* EXEC SQL FETCH update_cursor INTO : v_category, : v_food_name, : v_type, : v_calorie, : v_carbo, : v_protein, : v_fat; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 7;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )760;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqfoff = (           int )0;
        sqlstm.sqfmod = (unsigned int )2;
        sqlstm.sqhstv[0] = (         void  *)&v_category;
        sqlstm.sqhstl[0] = (unsigned int  )257;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&v_food_name;
        sqlstm.sqhstl[1] = (unsigned int  )257;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)&v_type;
        sqlstm.sqhstl[2] = (unsigned int  )257;
        sqlstm.sqhsts[2] = (         int  )0;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqhstv[3] = (         void  *)&v_calorie;
        sqlstm.sqhstl[3] = (unsigned int  )sizeof(float);
        sqlstm.sqhsts[3] = (         int  )0;
        sqlstm.sqindv[3] = (         void  *)0;
        sqlstm.sqinds[3] = (         int  )0;
        sqlstm.sqharm[3] = (unsigned int  )0;
        sqlstm.sqadto[3] = (unsigned short )0;
        sqlstm.sqtdso[3] = (unsigned short )0;
        sqlstm.sqhstv[4] = (         void  *)&v_carbo;
        sqlstm.sqhstl[4] = (unsigned int  )sizeof(float);
        sqlstm.sqhsts[4] = (         int  )0;
        sqlstm.sqindv[4] = (         void  *)0;
        sqlstm.sqinds[4] = (         int  )0;
        sqlstm.sqharm[4] = (unsigned int  )0;
        sqlstm.sqadto[4] = (unsigned short )0;
        sqlstm.sqtdso[4] = (unsigned short )0;
        sqlstm.sqhstv[5] = (         void  *)&v_protein;
        sqlstm.sqhstl[5] = (unsigned int  )sizeof(float);
        sqlstm.sqhsts[5] = (         int  )0;
        sqlstm.sqindv[5] = (         void  *)0;
        sqlstm.sqinds[5] = (         int  )0;
        sqlstm.sqharm[5] = (unsigned int  )0;
        sqlstm.sqadto[5] = (unsigned short )0;
        sqlstm.sqtdso[5] = (unsigned short )0;
        sqlstm.sqhstv[6] = (         void  *)&v_fat;
        sqlstm.sqhstl[6] = (unsigned int  )sizeof(float);
        sqlstm.sqhsts[6] = (         int  )0;
        sqlstm.sqindv[6] = (         void  *)0;
        sqlstm.sqinds[6] = (         int  )0;
        sqlstm.sqharm[6] = (unsigned int  )0;
        sqlstm.sqadto[6] = (unsigned short )0;
        sqlstm.sqtdso[6] = (unsigned short )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqphss = sqlstm.sqhsts;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqpins = sqlstm.sqinds;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlstm.sqpadto = sqlstm.sqadto;
        sqlstm.sqptdso = sqlstm.sqtdso;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}

 // 커서에 저장

        if (sqlca.sqlcode == 1403)
        {
            break;
        }

        v_category.arr[v_category.len] = '\0';
        v_food_name.arr[v_food_name.len] = '\0';
        v_type.arr[v_type.len] = '\0';

        gotoxy(10, 7);
        printf("%s\n", v_food_name.arr);
        gotoxy(10, 8);
        printf("%s\n", v_category.arr);
        gotoxy(10, 9);
        printf("%s\n", v_type.arr);
        gotoxy(10, 10);
        printf("%.1f\n", v_carbo);
        gotoxy(10, 11);
        printf("%.1f\n", v_protein);
        gotoxy(10, 12);
        printf("%.1f\n", v_fat);
        gotoxy(10, 13);
        printf("%.1f\n", v_calorie);
    }
    /* EXEC SQL CLOSE update_cursor; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 7;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )803;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    // no tuple
    if (sqlca.sqlerrd[2] == 0)
    {
        gotoxy(0, 21);
        printf("no tuple found");
        getch();
        return;
    }

    char input_name[100];
    char input_cate[100];
    char input_type[100];
    char input_cal[10];
    char input_carbo[10];
    char input_protein[10];
    char input_fat[10];

    gotoxy(47, 7);
    gets(input_name);
    gotoxy(47, 8);
    gets(input_cate);
    gotoxy(47, 9);
    gets(input_type);
    gotoxy(47, 10);
    gets(input_cal);
    gotoxy(47, 11);
    gets(input_carbo);
    gotoxy(47, 12);
    gets(input_protein);
    gotoxy(47, 13);
    gets(input_fat);

    sprintf(sqlstmt, "UPDATE food_table SET fcategory = '%s', ftype = '%s', calorie = %s, carbo = %s, protein = %s, fat = %s WHERE fname = '%s'",
            input_cate, input_type, input_cal, input_carbo, input_protein, input_fat, input_name);

    /* EXEC SQL PREPARE stmt_update FROM : sqlstmt; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 7;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )818;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)sqlstmt;
    sqlstm.sqhstl[0] = (unsigned int  )1024;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    /* EXEC SQL EXECUTE stmt_update; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 7;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )837;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    // 업데이트 성공 여부 확인
    if (sqlca.sqlcode != 0)
    {
        gotoxy(0, 21);
        printf("Error: Unable to update food. SQLCODE: %d\n", sqlca.sqlcode);
        /* EXEC SQL ROLLBACK WORK; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 7;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )852;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


        getch();
        return;
    }

    /* EXEC SQL COMMIT WORK; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 7;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )867;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    gotoxy(0, 21);
    printf("Food '%s' updated successfully.\n", input_update_name);
    getch();
}

/*
화면 보여주는 함수
*/
void print_screen(char *fname)
{
    FILE *fp;
    char line[100];

    if ((fp = fopen(fname, "r")) == NULL)
    {
        printf("file open error\n");
        getch();
        exit(-1);
    }
    while (1)
    {
        if (fgets(line, 99, fp) == NULL)
        {
            break;
        }
        printf("%s", line);
    }

    fclose(fp);
}

void sign_up()
{

    /* EXEC SQL BEGIN DECLARE SECTION; */ 

    /* VARCHAR v_id[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } v_id;

    char sqlstmt[1024];
    /* EXEC SQL END DECLARE SECTION; */ 


    clrscr();
    print_screen("screen/scr_sign_up.txt");

    char id[20];
    char pw[20];
    char re_pw[20];
    char name[20];
    char gender[6];
    char height[20];
    char weight[20];
    // 사용자 입력 받기
    while (1)
    {
        gotoxy(33, 4);
        gets(id);
        printf("id: %s\n", id);
        gotoxy(33, 6);
        gets(pw);
        printf("pw: %s\n", pw);
        gotoxy(33, 8);
        gets(re_pw);
        if (strcmp(pw, re_pw) != 0)
        {
            gotoxy(0, 22);
            //printf("Password does not match. Please try again.\n");
            printf("비밀번호 불일치\n");
            continue;
        }
        gotoxy(33, 10);
        gets(name);
        gotoxy(33, 12);
        gets(gender);
        if (strcmp(gender, "Female") != 0 && strcmp(gender, "Male") != 0)
        {
            gotoxy(0, 22);
            printf("Incorrect input type");
            continue;
        }
        gotoxy(33, 14);
        gets(height);
        gotoxy(33, 16);
        gets(weight);
        clrscr();

        sprintf(sqlstmt, "SELECT userID FROM user_table where userID = '%s'", id);
        /* EXEC SQL PREPARE USER FROM : sqlstmt; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 7;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.stmt = "";
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )882;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqhstv[0] = (         void  *)sqlstmt;
        sqlstm.sqhstl[0] = (unsigned int  )1024;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqphss = sqlstm.sqhsts;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqpins = sqlstm.sqinds;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlstm.sqpadto = sqlstm.sqadto;
        sqlstm.sqptdso = sqlstm.sqtdso;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


        /* EXEC SQL DECLARE user_cursor CURSOR FOR USER; */ 

        /* EXEC SQL OPEN user_cursor; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 7;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.stmt = "";
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )901;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqcmod = (unsigned int )0;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


        /* EXEC SQL FETCH user_cursor INTO : v_id; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 7;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )916;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqfoff = (           int )0;
        sqlstm.sqfmod = (unsigned int )2;
        sqlstm.sqhstv[0] = (         void  *)&v_id;
        sqlstm.sqhstl[0] = (unsigned int  )22;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqphss = sqlstm.sqhsts;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqpins = sqlstm.sqinds;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlstm.sqpadto = sqlstm.sqadto;
        sqlstm.sqptdso = sqlstm.sqtdso;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


        printf("%d\n", sqlca.sqlcode);
        if (sqlca.sqlcode == 0) // 아이디가 존재하는 경우
        {
            gotoxy(0, 22);
            printf("This ID is already taken. Please choose another one.\n");
            /* EXEC SQL CLOSE user_cursor; */ 

{
            struct sqlexd sqlstm;
            sqlstm.sqlvsn = 13;
            sqlstm.arrsiz = 7;
            sqlstm.sqladtp = &sqladt;
            sqlstm.sqltdsp = &sqltds;
            sqlstm.iters = (unsigned int  )1;
            sqlstm.offset = (unsigned int  )935;
            sqlstm.cud = sqlcud0;
            sqlstm.sqlest = (unsigned char  *)&sqlca;
            sqlstm.sqlety = (unsigned short)4352;
            sqlstm.occurs = (unsigned int  )0;
            sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


            continue;
        }
        // 여까지는 성공!!
        else if (sqlca.sqlcode == 1403) // 아이디가 존재하지 않는 경우
        {
            // 사용자 정보를 데이터베이스에 삽입
            sprintf(sqlstmt, "INSERT INTO user_table (userID, userPW, uname, gender, height, weight, isAdmin) VALUES ('%s', '%s', '%s', '%s', %s, %s, 0)", id, pw, name, gender, height, weight);
            /* EXEC SQL EXECUTE IMMEDIATE : sqlstmt; */ 

{
            struct sqlexd sqlstm;
            sqlstm.sqlvsn = 13;
            sqlstm.arrsiz = 7;
            sqlstm.sqladtp = &sqladt;
            sqlstm.sqltdsp = &sqltds;
            sqlstm.stmt = "";
            sqlstm.iters = (unsigned int  )1;
            sqlstm.offset = (unsigned int  )950;
            sqlstm.cud = sqlcud0;
            sqlstm.sqlest = (unsigned char  *)&sqlca;
            sqlstm.sqlety = (unsigned short)4352;
            sqlstm.occurs = (unsigned int  )0;
            sqlstm.sqhstv[0] = (         void  *)sqlstmt;
            sqlstm.sqhstl[0] = (unsigned int  )1024;
            sqlstm.sqhsts[0] = (         int  )0;
            sqlstm.sqindv[0] = (         void  *)0;
            sqlstm.sqinds[0] = (         int  )0;
            sqlstm.sqharm[0] = (unsigned int  )0;
            sqlstm.sqadto[0] = (unsigned short )0;
            sqlstm.sqtdso[0] = (unsigned short )0;
            sqlstm.sqphsv = sqlstm.sqhstv;
            sqlstm.sqphsl = sqlstm.sqhstl;
            sqlstm.sqphss = sqlstm.sqhsts;
            sqlstm.sqpind = sqlstm.sqindv;
            sqlstm.sqpins = sqlstm.sqinds;
            sqlstm.sqparm = sqlstm.sqharm;
            sqlstm.sqparc = sqlstm.sqharc;
            sqlstm.sqpadto = sqlstm.sqadto;
            sqlstm.sqptdso = sqlstm.sqtdso;
            sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}

 // 쿼리 실행

            if (sqlca.sqlcode != 0)
            {
                gotoxy(0, 22);
                printf("Error: Unable to sign_up. SQLCODE: %d\n", sqlca.sqlcode);
                /* EXEC SQL ROLLBACK WORK; */ 

{
                struct sqlexd sqlstm;
                sqlstm.sqlvsn = 13;
                sqlstm.arrsiz = 7;
                sqlstm.sqladtp = &sqladt;
                sqlstm.sqltdsp = &sqltds;
                sqlstm.iters = (unsigned int  )1;
                sqlstm.offset = (unsigned int  )969;
                sqlstm.cud = sqlcud0;
                sqlstm.sqlest = (unsigned char  *)&sqlca;
                sqlstm.sqlety = (unsigned short)4352;
                sqlstm.occurs = (unsigned int  )0;
                sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


                getch();
                continue;
            }

            gotoxy(0, 22);
            printf("Sign up successful! Press Any key\n");
            /* EXEC SQL COMMIT WORK; */ 

{
            struct sqlexd sqlstm;
            sqlstm.sqlvsn = 13;
            sqlstm.arrsiz = 7;
            sqlstm.sqladtp = &sqladt;
            sqlstm.sqltdsp = &sqltds;
            sqlstm.iters = (unsigned int  )1;
            sqlstm.offset = (unsigned int  )984;
            sqlstm.cud = sqlcud0;
            sqlstm.sqlest = (unsigned char  *)&sqlca;
            sqlstm.sqlety = (unsigned short)4352;
            sqlstm.occurs = (unsigned int  )0;
            sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


            getch();
            break;
        }
        else
        {
            gotoxy(0, 22);
            printf("An error occurred while checking the ID.\n");
            /* EXEC SQL CLOSE user_cursor; */ 

{
            struct sqlexd sqlstm;
            sqlstm.sqlvsn = 13;
            sqlstm.arrsiz = 7;
            sqlstm.sqladtp = &sqladt;
            sqlstm.sqltdsp = &sqltds;
            sqlstm.iters = (unsigned int  )1;
            sqlstm.offset = (unsigned int  )999;
            sqlstm.cud = sqlcud0;
            sqlstm.sqlest = (unsigned char  *)&sqlca;
            sqlstm.sqlety = (unsigned short)4352;
            sqlstm.occurs = (unsigned int  )0;
            sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


            continue;
        }
        break;
    }
    return;
}

void login()
{
    /* EXEC SQL BEGIN DECLARE SECTION; */ 

    char sqlstmt[1024];
    /* EXEC SQL END DECLARE SECTION; */ 

    clrscr();
    print_screen("screen/scr_login.txt");
    _putenv("NLS_LANG=American_America.KO16KSC5601"); // �ѱۻ��� �ʿ���
    while (1)
    {
        gotoxy(28, 20);

        char c = getchar();
        while (getchar() != '\n')
            ;

        if (c == '1')
        {
        }
        else if (c == '2')
        {
            sign_up();
            continue;
        }

        char input_id[255];
        char input_pw[255];

        gotoxy(33, 8);
        gets(input_id);
        printf("id: %s\n", input_id);
        gotoxy(33, 11);
        gets(input_pw);
        printf("pw: %s\n", input_pw);

        sprintf(sqlstmt, "SELECT userID, userPW, uname, gender, height, weight, isAdmin FROM user_table where userID = '%s' AND userPW = '%s'", input_id, input_pw);

        /* EXEC SQL PREPARE LOGIN FROM : sqlstmt; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 7;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.stmt = "";
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )1014;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqhstv[0] = (         void  *)sqlstmt;
        sqlstm.sqhstl[0] = (unsigned int  )1024;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqphss = sqlstm.sqhsts;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqpins = sqlstm.sqinds;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlstm.sqpadto = sqlstm.sqadto;
        sqlstm.sqptdso = sqlstm.sqtdso;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


        /* EXEC SQL DECLARE login_cursor CURSOR FOR LOGIN; */ 

        /* EXEC SQL OPEN login_cursor; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 7;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.stmt = "";
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )1033;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqcmod = (unsigned int )0;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


        /* EXEC SQL FETCH login_cursor INTO : v_userId, : v_userPw, : v_uname, : v_gender, : v_height, : v_weight, : v_isAdmin; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 7;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )1048;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqfoff = (           int )0;
        sqlstm.sqfmod = (unsigned int )2;
        sqlstm.sqhstv[0] = (         void  *)&v_userId;
        sqlstm.sqhstl[0] = (unsigned int  )257;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&v_userPw;
        sqlstm.sqhstl[1] = (unsigned int  )52;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)&v_uname;
        sqlstm.sqhstl[2] = (unsigned int  )32;
        sqlstm.sqhsts[2] = (         int  )0;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqhstv[3] = (         void  *)&v_gender;
        sqlstm.sqhstl[3] = (unsigned int  )8;
        sqlstm.sqhsts[3] = (         int  )0;
        sqlstm.sqindv[3] = (         void  *)0;
        sqlstm.sqinds[3] = (         int  )0;
        sqlstm.sqharm[3] = (unsigned int  )0;
        sqlstm.sqadto[3] = (unsigned short )0;
        sqlstm.sqtdso[3] = (unsigned short )0;
        sqlstm.sqhstv[4] = (         void  *)&v_height;
        sqlstm.sqhstl[4] = (unsigned int  )sizeof(float);
        sqlstm.sqhsts[4] = (         int  )0;
        sqlstm.sqindv[4] = (         void  *)0;
        sqlstm.sqinds[4] = (         int  )0;
        sqlstm.sqharm[4] = (unsigned int  )0;
        sqlstm.sqadto[4] = (unsigned short )0;
        sqlstm.sqtdso[4] = (unsigned short )0;
        sqlstm.sqhstv[5] = (         void  *)&v_weight;
        sqlstm.sqhstl[5] = (unsigned int  )sizeof(float);
        sqlstm.sqhsts[5] = (         int  )0;
        sqlstm.sqindv[5] = (         void  *)0;
        sqlstm.sqinds[5] = (         int  )0;
        sqlstm.sqharm[5] = (unsigned int  )0;
        sqlstm.sqadto[5] = (unsigned short )0;
        sqlstm.sqtdso[5] = (unsigned short )0;
        sqlstm.sqhstv[6] = (         void  *)&v_isAdmin;
        sqlstm.sqhstl[6] = (unsigned int  )sizeof(float);
        sqlstm.sqhsts[6] = (         int  )0;
        sqlstm.sqindv[6] = (         void  *)0;
        sqlstm.sqinds[6] = (         int  )0;
        sqlstm.sqharm[6] = (unsigned int  )0;
        sqlstm.sqadto[6] = (unsigned short )0;
        sqlstm.sqtdso[6] = (unsigned short )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqphss = sqlstm.sqhsts;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqpins = sqlstm.sqinds;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlstm.sqpadto = sqlstm.sqadto;
        sqlstm.sqptdso = sqlstm.sqtdso;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


        printf("%d\n", sqlca.sqlcode);

        if (sqlca.sqlcode == 1403)
        {
            gotoxy(0, 22);
            printf("ID or password is incorrect. Please try again.\n");
            continue;
        }
        else
        {
            v_userId.arr[v_userId.len] = '\0';
            v_userPw.arr[v_userPw.len] = '\0';
            v_uname.arr[v_uname.len] = '\0';
            v_gender.arr[v_gender.len] = '\0';
            main_options();
        }
    }
}
