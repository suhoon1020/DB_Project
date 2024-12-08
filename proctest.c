
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

 static const char *sq0003 = 
"select fcategory ,fname ,ftype ,calorie ,carbo ,protein ,fat  from food_tabl\
e            ";

typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{13,4130,1,0,0,
5,0,0,0,0,0,27,58,0,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,10,0,0,1,10,0,0,
36,0,0,2,0,0,31,83,0,0,0,0,0,1,0,
51,0,0,3,89,0,9,205,0,0,0,0,0,1,0,
66,0,0,3,0,0,13,213,0,0,7,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,4,0,0,2,4,0,0,2,4,
0,0,2,4,0,0,
109,0,0,3,0,0,15,246,0,0,0,0,0,1,0,
124,0,0,3,0,0,13,288,0,0,7,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,4,0,0,2,4,0,0,2,4,
0,0,2,4,0,0,
167,0,0,3,0,0,15,320,0,0,0,0,0,1,0,
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

/* manu */
void main_options();
void view_food();
void view_food_all();
void view_food_search();
void view_menu();
void refresh_today_menu();
void add_food();
void delete_food();
void modify_food();

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

/* EXEC SQL END DECLARE SECTION; */ 


#define getch() _getch()

void main()
{
    db_connect();

    main_options();
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
    clrscr();

    print_screen("screen/scr_main.txt");

    gotoxy(9, 19);

    char c = getchar();
    while (getchar() != '\n')
        ;

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
        modify_food(); // 음식 수정
        break;
    case '5':
        view_menu(); // 식단 확인
        break;
    case '6':
        refresh_today_menu(); // 오늘의 식단 새로 고침
        break;

    default:
        break;
    }
}

void view_food()
{
    clrscr();

    print_screen("screen/scr_select.txt");

    gotoxy(11, 16);

    char c = getchar();
    while (getchar() != '\n')
        ;

    /*
    1. view all food
    2. search food     */

    switch (c)
    {
    case '1':
        view_food_all();
        break;
    case '2':
        view_food_search();
        break;
    default:
        break;
    }
}

#define PAGE_NUM 5
void view_food_all()
{
    /* EXEC SQL BEGIN DECLARE SECTION; */ 

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

    clrscr();

    /* 고정 SQL 쿼리로 커서 선언 */
    /* EXEC SQL DECLARE c_cursor CURSOR FOR
        SELECT fcategory, fname, ftype, calorie, carbo, protein, fat from food_table; */ 

    /* EXEC SQL OPEN c_cursor; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = sq0003;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )51;
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
    printf("--------------------------------------------------------------\n");

    while (1)
    {
        /* EXEC SQL FETCH c_cursor INTO :v_category, :v_food_name, :v_type, :v_calorie, :v_carbo, :v_protein, :v_fat; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 7;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )66;
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

        printf(" %-10s %-20s %-10s %-10s %-10s %-10s\n",
               v_category.arr, v_food_name.arr, v_type.arr, v_calorie, v_carbo, v_protein, v_fat);
        ++count;

        if (count == PAGE_NUM)
        {
            printf("\n\n                                  Hit any key for next page\n");
            count = 0;
            getch();

            gotoxy(0, 3); // 이전 데이터 클리어
            for (int i = 0; i < PAGE_NUM; i++)
            {
                printf("                                                                                               \n");
            }
            gotoxy(0, 3); // 새 페이지 시작
        }
    }

    printf("\n");
    printf("Total matched tuples: %d\n", sqlca.sqlerrd[2]);

    /* EXEC SQL CLOSE c_cursor; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 7;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )109;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    getch(); // 종료
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

    clrscr();

    char input_category[20];
    char input_food_name[20];

    printf("Enter category: ");
    gets(input_category); // 사용자로부터 카테고리 입력받기
    printf("Enter menu name (or part of it): ");
    gets(input_food_name); // 사용자로부터 메뉴 이름 입력받기

    sprintf(sqlstmt,
            "SELECT fcategory, fname, ftpye ,carbo, protein, fat, calorie "
            "FROM FOOD WHERE category LIKE '%%%s%%' AND fname LIKE '%%%s%%'",
            input_category, input_food_name);

    printf(" %-10s %-20s %-10s %-10s %-10s %-10s %-10s\n",
           "Category", "Food Name", "Type", "Calorie", "Carbo", "Protein", "Fat");
    printf("--------------------------------------------------------------\n");

    while (1)
    {
        /* EXEC SQL FETCH c_cursor INTO : v_category, : v_food_name, :v_type, : v_carbo, : v_protein, : v_fat, : v_calorie; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 7;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )124;
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

        printf(" %-10s %-20s %-8.2f %-8.2f %-8.2f %-8.2f\n",
               v_category.arr, v_food_name.arr, v_carbo, v_protein, v_fat, v_calorie);
        ++count;

        if (count == PAGE_NUM)
        {
            printf("\n\n                                  Hit any key for next page\n");
            count = 0;
            getch();

            gotoxy(0, 3); // 이전 데이터 클리어
            for (int i = 0; i < PAGE_NUM; i++)
            {
                printf("                                                                                               \n");
            }
            gotoxy(0, 3); // 새 페이지 시작
        }
    }

    printf("\n");
    printf("Total matched tuples: %d\n", sqlca.sqlerrd[2]);

    /* EXEC SQL CLOSE c_cursor; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 7;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )167;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    getch(); // 종료
}

void view_menu() // 식단 확인
{
}

void refresh_today_menu()
{
}

void add_food()
{
}

void delete_food()
{
}

void modify_food()
{
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