
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
  1,0,0,
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
{13,4242,1,0,0,
5,0,0,0,0,0,27,74,0,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,10,0,0,1,10,0,0,
36,0,0,2,0,0,31,99,0,0,0,0,0,1,0,
51,0,0,3,0,0,17,266,0,0,1,1,0,1,0,1,97,0,0,
70,0,0,3,0,0,45,268,0,0,0,0,0,1,0,
85,0,0,3,0,0,13,276,0,0,7,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,4,0,0,2,4,0,0,2,4,
0,0,2,4,0,0,
128,0,0,3,0,0,15,310,0,0,0,0,0,1,0,
143,0,0,4,0,0,17,353,0,0,1,1,0,1,0,1,97,0,0,
162,0,0,4,0,0,45,355,0,0,0,0,0,1,0,
177,0,0,4,0,0,13,363,0,0,7,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,4,0,0,2,4,0,0,2,4,
0,0,2,4,0,0,
220,0,0,4,0,0,15,395,0,0,0,0,0,1,0,
235,0,0,3,0,0,17,427,0,0,1,1,0,1,0,1,97,0,0,
254,0,0,3,0,0,45,429,0,0,0,0,0,1,0,
269,0,0,3,0,0,13,437,0,0,5,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,
304,0,0,3,0,0,15,472,0,0,0,0,0,1,0,
319,0,0,5,0,0,17,561,0,0,1,1,0,1,0,1,97,0,0,
338,0,0,5,0,0,45,563,0,0,0,0,0,1,0,
353,0,0,5,0,0,13,565,0,0,1,0,0,1,0,2,9,0,0,
372,0,0,6,0,0,24,596,0,0,1,1,0,1,0,1,97,0,0,
391,0,0,7,0,0,29,602,0,0,0,0,0,1,0,
406,0,0,3,0,0,17,646,0,0,1,1,0,1,0,1,97,0,0,
425,0,0,3,0,0,45,648,0,0,0,0,0,1,0,
440,0,0,3,0,0,13,652,0,0,7,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,4,0,0,2,4,0,0,2,4,
0,0,2,4,0,0,
483,0,0,8,0,0,17,692,0,0,1,1,0,1,0,1,97,0,0,
502,0,0,8,0,0,21,693,0,0,0,0,0,1,0,
517,0,0,9,0,0,31,699,0,0,0,0,0,1,0,
532,0,0,10,0,0,29,704,0,0,0,0,0,1,0,
547,0,0,3,0,0,15,718,0,0,0,0,0,1,0,
562,0,0,11,0,0,17,747,0,0,1,1,0,1,0,1,97,0,0,
581,0,0,11,0,0,45,749,0,0,0,0,0,1,0,
596,0,0,11,0,0,13,753,0,0,7,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,4,0,0,2,4,0,0,2,
4,0,0,2,4,0,0,
639,0,0,11,0,0,15,779,0,0,0,0,0,1,0,
654,0,0,12,0,0,17,858,0,0,1,1,0,1,0,1,97,0,0,
673,0,0,12,0,0,21,859,0,0,0,0,0,1,0,
688,0,0,13,0,0,31,866,0,0,0,0,0,1,0,
703,0,0,14,0,0,29,871,0,0,0,0,0,1,0,
718,0,0,15,0,0,17,929,0,0,1,1,0,1,0,1,97,0,0,
737,0,0,15,0,0,45,931,0,0,0,0,0,1,0,
752,0,0,15,0,0,13,932,0,0,1,0,0,1,0,2,9,0,0,
771,0,0,15,0,0,15,937,0,0,0,0,0,1,0,
786,0,0,16,0,0,24,1002,0,0,1,1,0,1,0,1,97,0,0,
805,0,0,17,0,0,29,1009,0,0,0,0,0,1,0,
820,0,0,18,0,0,17,1053,0,0,1,1,0,1,0,1,97,0,0,
839,0,0,18,0,0,45,1055,0,0,0,0,0,1,0,
854,0,0,18,0,0,13,1056,0,0,7,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,4,0,0,2,
4,0,0,2,4,0,0,
897,0,0,3,0,0,17,1133,0,0,1,1,0,1,0,1,97,0,0,
916,0,0,3,0,0,45,1135,0,0,0,0,0,1,0,
931,0,0,3,0,0,13,1137,0,0,1,0,0,1,0,2,3,0,0,
950,0,0,3,0,0,15,1139,0,0,0,0,0,1,0,
965,0,0,3,0,0,17,1199,0,0,1,1,0,1,0,1,97,0,0,
984,0,0,3,0,0,45,1201,0,0,0,0,0,1,0,
999,0,0,3,0,0,13,1202,0,0,4,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,4,0,0,
1030,0,0,3,0,0,15,1235,0,0,0,0,0,1,0,
1045,0,0,19,35,0,4,1251,0,0,1,0,0,1,0,2,97,0,0,
1064,0,0,20,139,0,3,1254,0,0,5,4,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,2,3,0,0,
1099,0,0,21,86,0,3,1267,0,0,4,4,0,1,0,1,3,0,0,1,9,0,0,1,97,0,0,1,97,0,0,
1130,0,0,22,0,0,31,1273,0,0,0,0,0,1,0,
1145,0,0,23,86,0,3,1277,0,0,4,4,0,1,0,1,3,0,0,1,9,0,0,1,97,0,0,1,97,0,0,
1176,0,0,24,0,0,31,1283,0,0,0,0,0,1,0,
1191,0,0,25,86,0,3,1287,0,0,4,4,0,1,0,1,3,0,0,1,9,0,0,1,97,0,0,1,97,0,0,
1222,0,0,26,0,0,31,1293,0,0,0,0,0,1,0,
1237,0,0,27,0,0,29,1299,0,0,0,0,0,1,0,
1252,0,0,3,0,0,17,1324,0,0,1,1,0,1,0,1,97,0,0,
1271,0,0,3,0,0,45,1326,0,0,0,0,0,1,0,
1286,0,0,3,0,0,13,1328,0,0,4,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,4,0,0,
1317,0,0,3,0,0,15,1332,0,0,0,0,0,1,0,
1332,0,0,3,0,0,15,1339,0,0,0,0,0,1,0,
1347,0,0,3,0,0,15,1347,0,0,0,0,0,1,0,
};


#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <conio.h>
#include <time.h>

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
void add_food();
void delete_food();
void update_food();
void login();
void sign_up();
void print_screen(char *fname);
void refresh_today_menu();
void get_today_menu();
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
float v_menu_cal;
/* EXEC SQL END DECLARE SECTION; */ 


#define getch() _getch()
#define PAGE_NUM 5

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

void main_options()
{
    char c;
    while (1) // 臾댄븳 猷⑦봽
    {
        get_today_menu();
        clrscr();                            // ?솕硫? 吏??슦湲?
        print_screen("screen/scr_main.txt"); // ?솕硫? 異쒕젰
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

        gotoxy(12, 7);
        printf("                                    ");
        gotoxy(12, 7);
        printf("%f", v_menu_cal);

        gotoxy(7, 19); // 而ㅼ꽌 ?쐞移? ?꽕?젙
        c = getchar(); // ?궗?슜?옄 ?엯?젰 諛쏄린
        while (getchar() != '\n')
            ; // ?엯?젰 踰꾪띁 鍮꾩슦湲?

        switch (c)
        {
        case '1':
            view_food(); // ?쓬?떇 ?솗?씤
            break;
        case '2':
            if (v_isAdmin == 1.0f)
                add_food(); // ?쓬?떇 異붽??
            else
            {
                gotoxy(11, 24); // 而ㅼ꽌 ?쐞移? ?꽕?젙
                printf("Admin Only\n");
                getch();
            }

            break;
        case '3':
            if (v_isAdmin == 1.0f)
                delete_food(); // ?쓬?떇 異붽??
            else
            {
                gotoxy(11, 24); // 而ㅼ꽌 ?쐞移? ?꽕?젙
                printf("Admin Only\n");
                getch();
            }
            break;

        case '4':
            if (v_isAdmin == 1.0f)
                update_food(); // ?쓬?떇 異붽??
            else
            {
                gotoxy(11, 24); // 而ㅼ꽌 ?쐞移? ?꽕?젙
                printf("Admin Only\n");
                getch();
            }
            break;
        case '5':
            view_menu(); // ?떇?떒 ?솗?씤
            break;
        case '6':
            refresh_today_menu(); // ?삤?뒛?쓽 ?떇?떒 ?깉濡? 怨좎묠
            break;
        case '7':
            exit(0); // 醫낅즺
        default:
            gotoxy(11, 24); // 而ㅼ꽌 ?쐞移? ?꽕?젙
            printf("Invalid input\n");
            getch();
        }
    }
}

void view_food()
{
    char c;

    while (1)
    {
        clrscr();
        print_screen("screen/scr_select.txt");
        gotoxy(11, 16);

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
            gotoxy(11, 24); // 而ㅼ꽌 ?쐞移? ?꽕?젙
            printf("Invalid input\n");
            getch();
        }
    }
}

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
        sqlstm.offset = (unsigned int  )85;
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
    gotoxy(0, 23);
    printf("Press Q : Go back / Press any key : Exit Program \n");
    /* EXEC SQL CLOSE c_cursor; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 7;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )128;
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
    sqlstm.offset = (unsigned int  )143;
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
    sqlstm.offset = (unsigned int  )162;
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
        /* EXEC SQL FETCH s_cursor INTO : v_category, : v_food_name, : v_type, : v_calorie, : v_carbo, : v_protein, : v_fat; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 7;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )177;
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
    sqlstm.offset = (unsigned int  )220;
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
            "SELECT DISTINCT m.mDate, m.mTime, mt.fnameMain, mt.fnameSub, mt.fnameSide FROM composition_menu_table m JOIN menu_table mt ON m.menuID = mt.menuID WHERE mt.userID = '%s' ORDER BY m.mDate, m.mTime", v_userId.arr);
    /* EXEC SQL PREPARE S FROM : sqlstmt; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 7;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )235;
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
    sqlstm.offset = (unsigned int  )254;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.sqlpfmem = (unsigned int  )0;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqcmod = (unsigned int )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    printf(" %-15s %-10s %-20s %-20s %-20s\n",
           "Date", "Time", "Main Dish", "Sub Dish", "Side Dish");
    printf("-------------------------------------------------------------------------------\n");

    while (1)
    {
        /* EXEC SQL FETCH v_cursor INTO : v_mDate, : v_mTime, : v_fnameMain, : v_fnameSub, : v_fnameSide; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 7;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )269;
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
        sqlstm.sqhstv[2] = (         void  *)&v_fnameMain;
        sqlstm.sqhstl[2] = (unsigned int  )32;
        sqlstm.sqhsts[2] = (         int  )0;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqhstv[3] = (         void  *)&v_fnameSub;
        sqlstm.sqhstl[3] = (unsigned int  )32;
        sqlstm.sqhsts[3] = (         int  )0;
        sqlstm.sqindv[3] = (         void  *)0;
        sqlstm.sqinds[3] = (         int  )0;
        sqlstm.sqharm[3] = (unsigned int  )0;
        sqlstm.sqadto[3] = (unsigned short )0;
        sqlstm.sqtdso[3] = (unsigned short )0;
        sqlstm.sqhstv[4] = (         void  *)&v_fnameSide;
        sqlstm.sqhstl[4] = (unsigned int  )32;
        sqlstm.sqhsts[4] = (         int  )0;
        sqlstm.sqindv[4] = (         void  *)0;
        sqlstm.sqinds[4] = (         int  )0;
        sqlstm.sqharm[4] = (unsigned int  )0;
        sqlstm.sqadto[4] = (unsigned short )0;
        sqlstm.sqtdso[4] = (unsigned short )0;
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
        v_fnameSub.arr[v_fnameSub.len] = '\0';

        printf(" %-15s %-10s %-20s %-20s %-20s\n",
               v_mDate.arr, v_mTime.arr, v_fnameMain.arr, v_fnameSub.arr, v_fnameSide.arr);
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
    sqlstm.offset = (unsigned int  )304;
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

    /* varchar v_menu_name[255]; */ 
struct { unsigned short len; unsigned char arr[255]; } v_menu_name;

    char sqlstmt[1024];
    /* EXEC SQL END DECLARE SECTION; */ 


    char category1[255];
    char category2[255];
    char menu_name[255];
    char calorie[5];
    char carbo[5];
    char protein[5];
    char fat[5];

    clrscr();

    print_screen("screen/scr_insert.txt");

    // 카테고리 1 입력
    while (1)
    {
        gotoxy(14, 4); // "카테고리 1:"
        gets(category1);

        // 카테고리 1 입력 중 범주에 벗어난 값이 입력되면 오류 메시지 출력
        if (strcmp(category1, "Western") != 0 &&
            strcmp(category1, "Korean") != 0 &&
            strcmp(category1, "Japanese") != 0 &&
            strcmp(category1, "Chinese") != 0)
        {
            gotoxy(0, 21); // 오류 메시지 출력
            printf("The category you entered is not valid. Please re-enter.");
            gotoxy(14, 4);
            printf("                                                           "); // 이전 입력 삭제
            continue;
        }
        else
        {
            break;
        }
    }
    // 카테고리 2 입력
    while (1)
    {
        gotoxy(14, 7); // "카테고리 2:"
        gets(category2);

        // 카테고리 2 입력 중 범주에 벗어난 값이 입력되면 오류 메시지 출력
        if (strcmp(category2, "Main") != 0 &&
            strcmp(category2, "Sub") != 0 &&
            strcmp(category2, "Side") != 0)
        {
            // 오류 메시지 삭제
            gotoxy(0, 21); // 오류 메시지 출력
            printf("The type you entered is not valid. Please re-enter.");
            gotoxy(14, 7);
            printf("                                                           "); // 이전 입력 삭제
            continue;
        }
        else
        {

            break;
        }
    }

    // 메뉴 이름 입력
    while (1)
    {
        gotoxy(14, 10); // "메뉴 이름:"
        gets(menu_name);

        sprintf(sqlstmt, "SELECT fname FROM food_table WHERE fname = '%s'", menu_name);

        /* EXEC SQL PREPARE ADD_FOOD from : sqlstmt; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 7;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.stmt = "";
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )319;
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


        /* EXEC SQL DECLARE ADD_FOOD_CURSOR CURSOR FOR ADD_FOOD; */ 

        /* EXEC SQL OPEN ADD_FOOD_CURSOR; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 7;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.stmt = "";
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )338;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqcmod = (unsigned int )0;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



        /* EXEC SQL FETCH ADD_FOOD_CURSOR INTO : v_menu_name; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 7;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )353;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqfoff = (           int )0;
        sqlstm.sqfmod = (unsigned int )2;
        sqlstm.sqhstv[0] = (         void  *)&v_menu_name;
        sqlstm.sqhstl[0] = (unsigned int  )257;
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



        if (sqlca.sqlcode == 0)
        {
            gotoxy(0, 21);
            printf("Already exists food name");
            gotoxy(14, 10);
            printf("                                                           ");
            continue;
        }
        else
        {
            break;
        }
    }

    while (1)
    {
        gotoxy(14, 12); // "칼로리:"
        gets(calorie);

        gotoxy(14, 14); // "탄수화물:"
        gets(carbo);

        gotoxy(14, 16); // "단백질:"
        gets(protein);

        gotoxy(14, 18); // "지방:"
        gets(fat);

        sprintf(sqlstmt, "INSERT INTO food_table(fcategory, ftype, fname, calorie, carbo, protein, fat) VALUES('%s', '%s', '%s', %s, %s, %s, %s)", category1, category2, menu_name, calorie, carbo, protein, fat);
        /* EXEC SQL EXECUTE IMMEDIATE : sqlstmt; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 7;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.stmt = "";
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )372;
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



        if (sqlca.sqlcode == 0)
        {
            gotoxy(0, 21); // 성공 메시지 출력 위치
            printf("Data added successfully.");
            /* EXEC SQL COMMIT WORK; */ 

{
            struct sqlexd sqlstm;
            sqlstm.sqlvsn = 13;
            sqlstm.arrsiz = 7;
            sqlstm.sqladtp = &sqladt;
            sqlstm.sqltdsp = &sqltds;
            sqlstm.iters = (unsigned int  )1;
            sqlstm.offset = (unsigned int  )391;
            sqlstm.cud = sqlcud0;
            sqlstm.sqlest = (unsigned char  *)&sqlca;
            sqlstm.sqlety = (unsigned short)4352;
            sqlstm.occurs = (unsigned int  )0;
            sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


        }
        else
        {
            gotoxy(0, 21);
            printf("Error adding data: %s\n", sqlca.sqlerrm.sqlerrmc);
            exit(0);
        }

        gotoxy(0, 23);
        printf("Press Enter to return to main menu.");
        getch();

        break;
    }
    clrscr(); // 화면 초기화
    return;
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
    sqlstm.offset = (unsigned int  )406;
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
    sqlstm.offset = (unsigned int  )425;
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
        sqlstm.offset = (unsigned int  )440;
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
            gotoxy(0, 22);
            printf("No such food item found.");
            getch();
            return;
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
        printf("%.1f\n", v_calorie);
        gotoxy(10, 11);
        printf("%.1f\n", v_carbo);
        gotoxy(10, 12);
        printf("%.1f\n", v_protein);
        gotoxy(10, 13);
        printf("%.1f\n", v_fat);

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
            sqlstm.offset = (unsigned int  )483;
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
            sqlstm.offset = (unsigned int  )502;
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
                sqlstm.offset = (unsigned int  )517;
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
            sqlstm.offset = (unsigned int  )532;
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
    sqlstm.offset = (unsigned int  )547;
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
    sqlstm.offset = (unsigned int  )562;
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
    sqlstm.offset = (unsigned int  )581;
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
        sqlstm.offset = (unsigned int  )596;
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
        printf("%.1f\n", v_calorie);
        gotoxy(10, 11);
        printf("%.1f\n", v_carbo);
        gotoxy(10, 12);
        printf("%.1f\n", v_protein);
        gotoxy(10, 13);
        printf("%.1f\n", v_fat);
    }
    /* EXEC SQL CLOSE update_cursor; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 7;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )639;
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
    // 카테고리 1 입력
    while (1)
    {
        gotoxy(47, 8);
        gets(input_cate);

        if (strcmp(input_cate, "Western") != 0 &&
            strcmp(input_cate, "Korean") != 0 &&
            strcmp(input_cate, "Japanese") != 0 &&
            strcmp(input_cate, "Chinese") != 0)
        {
            gotoxy(0, 21); // 오류 메시지 출력
            printf("The category you entered is not valid. Please re-enter.");
            gotoxy(47, 8);
            printf("                                                           "); // 이전 입력 삭제
            continue;
        }
        else
        {
            break;
        }
    }
    // 카테고리 2 입력
    while (1)
    {
        gotoxy(47, 9); // "카테고리 2:"
        gets(input_type);

        // 카테고리 2 입력 중 범주에 벗어난 값이 입력되면 오류 메시지 출력
        if (strcmp(input_type, "Main") != 0 &&
            strcmp(input_type, "Sub") != 0 &&
            strcmp(input_type, "Side") != 0)
        {
            // 오류 메시지 삭제
            gotoxy(0, 21); // 오류 메시지 출력
            printf("The type you entered is not valid. Please re-enter.");
            gotoxy(47, 9);
            printf("                                                           "); // 이전 입력 삭제
            continue;
        }
        else
        {

            break;
        }
    }
    gotoxy(47, 10);
    gets(input_cal);
    gotoxy(47, 11);
    gets(input_carbo);
    gotoxy(47, 12);
    gets(input_protein);
    gotoxy(47, 13);
    gets(input_fat);

    sprintf(sqlstmt, "UPDATE food_table SET fname = '%s', fcategory = '%s', ftype = '%s', calorie = %s, carbo = %s, protein = %s, fat = %s WHERE fname = '%s'",
            input_name, input_cate, input_type, input_cal, input_carbo, input_protein, input_fat, input_update_name);

    /* EXEC SQL PREPARE stmt_update FROM : sqlstmt; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 7;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )654;
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
    sqlstm.offset = (unsigned int  )673;
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
        sqlstm.offset = (unsigned int  )688;
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
    sqlstm.offset = (unsigned int  )703;
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
    char gender[10];
    char height[20];
    char weight[20];
    // 사용자 입력 받기

    // 아이디 입력
    while (1)
    {
        gotoxy(33, 4);
        gets(id);
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
        sqlstm.offset = (unsigned int  )718;
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
        sqlstm.offset = (unsigned int  )737;
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
        sqlstm.offset = (unsigned int  )752;
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
            sqlstm.offset = (unsigned int  )771;
            sqlstm.cud = sqlcud0;
            sqlstm.sqlest = (unsigned char  *)&sqlca;
            sqlstm.sqlety = (unsigned short)4352;
            sqlstm.occurs = (unsigned int  )0;
            sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


            gotoxy(33, 4);
            printf("                                    ");
            continue;
        }
        else
        {
            break;
        }
    }

    // 비밀번호 입력
    while (1)
    {
        gotoxy(33, 6);
        gets(pw);
        gotoxy(33, 8);
        gets(re_pw);
        if (strcmp(pw, re_pw) != 0)
        {
            gotoxy(0, 22);
            printf("Password does not match. Please try again.\n");
            gotoxy(33, 6);
            printf("                                    ");
            gotoxy(33, 8);
            printf("                                    ");
            continue;
        }
        else
        {
            break;
        }
    }

    gotoxy(33, 10);
    gets(name);

    // 성별 입력
    while (1)
    {
        gotoxy(33, 12);
        gets(gender);
        if (strcmp(gender, "Female") != 0 && strcmp(gender, "Male") != 0)
        {
            gotoxy(0, 22);
            printf("Incorrect input type");
            gotoxy(33, 12);
            printf("                                    ");
            continue;
        }
        else
        {
            break;
        }
    }

    while (1)
    {
        gotoxy(33, 14);
        gets(height);
        gotoxy(33, 16);
        gets(weight);

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
        sqlstm.offset = (unsigned int  )786;
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

        if (sqlca.sqlcode == 0)
        {
            gotoxy(0, 23); // 성공 메시지 출력 위치
            printf("Sign up successful! Press Any key\n");
            getch();
            /* EXEC SQL COMMIT WORK; */ 

{
            struct sqlexd sqlstm;
            sqlstm.sqlvsn = 13;
            sqlstm.arrsiz = 7;
            sqlstm.sqladtp = &sqladt;
            sqlstm.sqltdsp = &sqltds;
            sqlstm.iters = (unsigned int  )1;
            sqlstm.offset = (unsigned int  )805;
            sqlstm.cud = sqlcud0;
            sqlstm.sqlest = (unsigned char  *)&sqlca;
            sqlstm.sqlety = (unsigned short)4352;
            sqlstm.occurs = (unsigned int  )0;
            sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


            break;
        }
        else
        {
            gotoxy(0, 23);
            printf("                                                   ");
            printf("Error adding data: %s\n", sqlca.sqlerrm.sqlerrmc);
            exit(0);
        }
    }
    return;
}

void login()
{
    /* EXEC SQL BEGIN DECLARE SECTION; */ 

    char sqlstmt[1024];
    /* EXEC SQL END DECLARE SECTION; */ 


    char input_id[255];
    char input_pw[255];

    while (1)
    {
        clrscr();
        print_screen("screen/scr_login.txt");
        // 사용자 입력으로 가기
        gotoxy(28, 20);

        // 사용자 입력 받기
        char c = getchar();
        while (getchar() != '\n')
            ;

        if (c == '1')
        {
            gotoxy(33, 8);
            gets(input_id);
            gotoxy(33, 11);
            gets(input_pw);

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
            sqlstm.offset = (unsigned int  )820;
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
            sqlstm.offset = (unsigned int  )839;
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
            sqlstm.offset = (unsigned int  )854;
            sqlstm.selerr = (unsigned short)1;
            sqlstm.sqlpfmem = (unsigned int  )0;
            sqlstm.cud = sqlcud0;
            sqlstm.sqlest = (unsigned char  *)&sqlca;
            sqlstm.sqlety = (unsigned short)4352;
            sqlstm.occurs = (unsigned int  )0;
            sqlstm.sqfoff = (           int )0;
            sqlstm.sqfmod = (unsigned int )2;
            sqlstm.sqhstv[0] = (         void  *)&v_userId;
            sqlstm.sqhstl[0] = (unsigned int  )52;
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



            if (sqlca.sqlcode == 1403) // 로그인 실패
            {
                gotoxy(0, 22);
                printf("ID or password is incorrect. Please try again.\n");
                getch();
                continue;
            }
            else
            {
                v_userId.arr[v_userId.len] = '\0';
                v_userPw.arr[v_userPw.len] = '\0';
                v_uname.arr[v_uname.len] = '\0';
                v_gender.arr[v_gender.len] = '\0';
                gotoxy(0, 24);
                printf("Login Success, Press any key\n");
                getch();
                main_options();
            }
        }
        else if (c == '2')
        {
            sign_up();
            continue;
        }

        else
        {
            gotoxy(0, 22);
            printf("Invalid input\n");
            getch();
            continue;
        }
    }
}

void set_meal_time(char *v_meal_time)
{
    time_t current_time;
    struct tm *local_time;

    time(&current_time);
    local_time = localtime(&current_time);

    if (local_time->tm_hour >= 6 && local_time->tm_hour < 10)
    {
        strcpy(v_meal_time, "Breakfast");
    }
    else if (local_time->tm_hour >= 12 && local_time->tm_hour < 14)
    {
        strcpy(v_meal_time, "Lunch");
    }
    else if (local_time->tm_hour >= 18 && local_time->tm_hour < 21)
    {
        strcpy(v_meal_time, "Dinner");
    }
    else
    {
        strcpy(v_meal_time, "out");
    }
}

int is_menu_exists(const char *v_meal_time)
{
    /* EXEC SQL BEGIN DECLARE SECTION; */ 

    char sqlstmt[1024];
    int count = 0;
    /* EXEC SQL END DECLARE SECTION; */ 


    snprintf(sqlstmt, sizeof(sqlstmt),
             "SELECT COUNT(*) FROM composition_menu_table cm, menu_table m "
             "WHERE cm.menuID = m.menuID AND m.userID = '%s' "
             "AND cm.mDate = TRUNC(SYSDATE) "
             "AND cm.mTime = '%s'",
             v_userId.arr, v_meal_time);

    /* EXEC SQL PREPARE S FROM : sqlstmt; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 7;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )897;
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


    /* EXEC SQL DECLARE t_cursor CURSOR FOR S; */ 

    /* EXEC SQL OPEN t_cursor; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 7;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )916;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.sqlpfmem = (unsigned int  )0;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqcmod = (unsigned int )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    /* EXEC SQL FETCH t_cursor INTO : count; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 7;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )931;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.sqlpfmem = (unsigned int  )0;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqfoff = (           int )0;
    sqlstm.sqfmod = (unsigned int )2;
    sqlstm.sqhstv[0] = (         void  *)&count;
    sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
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



    /* EXEC SQL CLOSE t_cursor; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 7;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )950;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    // 이미 메뉴가 존재하면 1, 그렇지 않으면 0 반환
    return (count > 0) ? 1 : 0;
}

void refresh_today_menu()
{
    /* EXEC SQL BEGIN DECLARE SECTION; */ 

    float day_max_cal;

    int v_menu_id;
    char v_current_date[11];
    char v_meal_time[10];

    /* VARCHAR v_t_main_food_name[30]; */ 
struct { unsigned short len; unsigned char arr[30]; } v_t_main_food_name;

    /* VARCHAR v_t_sub_food_name[30]; */ 
struct { unsigned short len; unsigned char arr[30]; } v_t_sub_food_name;

    /* VARCHAR v_t_side_food_name[30]; */ 
struct { unsigned short len; unsigned char arr[30]; } v_t_side_food_name;

    float v_t_menu_cal;

    char sqlstmt[1024];
    /* EXEC SQL END DECLARE SECTION; */ 


    set_meal_time(v_meal_time);

    if (is_menu_exists(v_meal_time) || !strcmp(v_meal_time, "out"))
    {
        gotoxy(0, 24);
        printf("It is not menu time or a menu already exists. \n");
        getch();
        return; // 硫붾돱媛? ?씠誘? ?엳?쑝硫? ?뜑 ?씠?긽 ?닔?뻾?븯吏? ?븡?쓬
    }

    /* 怨꾩궛?맂 理쒕?? 移쇰줈由? */
    day_max_cal = (10.0 * v_weight) + (6.25 * v_height) - 100 +
                  (!strcmp(v_gender.arr, "Male") ? 5.0 : -161.0);

    float menu_max_cal = day_max_cal / 3;

    while (1)
    {
        clrscr(); // ?솕硫? ?겢由ъ뼱
        print_screen("screen/scr_today_menu.txt");

        char input_category[20];
        gotoxy(34, 3);
        gets(input_category);

        /* SQL 荑쇰━ ?깮?꽦 */
        snprintf(sqlstmt, sizeof(sqlstmt),
                 "SELECT main_menu.fname, sub_menu.fname, side_menu.fname, "
                 "(main_menu.calorie + sub_menu.calorie + side_menu.calorie) AS total_calorie "
                 "FROM "
                 "(SELECT fname, calorie FROM food_table WHERE fcategory = '%s' AND ftype = 'Main' ORDER BY dbms_random.value) main_menu, "
                 "(SELECT fname, calorie FROM food_table WHERE fcategory = '%s' AND ftype = 'Sub' ORDER BY dbms_random.value) sub_menu, "
                 "(SELECT fname, calorie FROM food_table WHERE fcategory = '%s' AND ftype = 'Side' ORDER BY dbms_random.value) side_menu "
                 "WHERE (main_menu.calorie + sub_menu.calorie + side_menu.calorie) <= %f"
                 "AND ROWNUM = 1",
                 input_category, input_category, input_category, menu_max_cal);

        /* EXEC SQL PREPARE S FROM : sqlstmt; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 7;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.stmt = "";
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )965;
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
        sqlstm.arrsiz = 7;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.stmt = "";
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )984;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqcmod = (unsigned int )0;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


        /* EXEC SQL FETCH m1_cursor INTO : v_t_main_food_name, : v_t_sub_food_name, : v_t_side_food_name, : v_t_menu_cal; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 7;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )999;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqfoff = (           int )0;
        sqlstm.sqfmod = (unsigned int )2;
        sqlstm.sqhstv[0] = (         void  *)&v_t_main_food_name;
        sqlstm.sqhstl[0] = (unsigned int  )32;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&v_t_sub_food_name;
        sqlstm.sqhstl[1] = (unsigned int  )32;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)&v_t_side_food_name;
        sqlstm.sqhstl[2] = (unsigned int  )32;
        sqlstm.sqhsts[2] = (         int  )0;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqhstv[3] = (         void  *)&v_t_menu_cal;
        sqlstm.sqhstl[3] = (unsigned int  )sizeof(float);
        sqlstm.sqhsts[3] = (         int  )0;
        sqlstm.sqindv[3] = (         void  *)0;
        sqlstm.sqinds[3] = (         int  )0;
        sqlstm.sqharm[3] = (unsigned int  )0;
        sqlstm.sqadto[3] = (unsigned short )0;
        sqlstm.sqtdso[3] = (unsigned short )0;
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
        { /* ?뜲?씠?꽣媛? ?뾾?쓣 寃쎌슦 */
            gotoxy(0, 23);
            printf("No suitable menu found within calorie limit.\n");
            getch();
            return;
        }
        else if (sqlca.sqlcode != 0)
        { /* 湲고?? ?삤瑜? */
            gotoxy(0, 23);
            printf("SQL Error: %s\n", sqlca.sqlerrm.sqlerrmc);
            getch();
            return;
        }
        else
        {
            v_t_main_food_name.arr[v_t_main_food_name.len] = '\0';
            v_t_sub_food_name.arr[v_t_sub_food_name.len] = '\0';
            v_t_side_food_name.arr[v_t_side_food_name.len] = '\0';
        }
        gotoxy(22, 6);
        printf("%s", v_t_main_food_name.arr);
        gotoxy(22, 7);
        printf("%s", v_t_sub_food_name.arr);
        gotoxy(22, 8);
        printf("%s", v_t_side_food_name.arr);
        gotoxy(22, 9);
        printf("%f", menu_max_cal);
        gotoxy(22, 10);
        printf("%f", v_t_menu_cal);

        /* EXEC SQL CLOSE m1_cursor; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 7;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )1030;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



        char c;
        gotoxy(0, 12);
        printf("1 to commit / 2 to back / other refresh menu");
        c = getchar();
        while (getchar() != '\n')
            ;

        if (c == '1')
            break;
        else if (c == '2')
            return;
    }

    /* ?쁽?옱 ?궇吏쒕?? v_current_date?뿉 SYSDATE濡? ?븷?떦 */
    /* EXEC SQL SELECT SYSDATE INTO : v_current_date FROM dual; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 7;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "select SYSDATE into :b0  from dual ";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1045;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.sqlpfmem = (unsigned int  )0;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)v_current_date;
    sqlstm.sqhstl[0] = (unsigned int  )11;
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



    /* menu_table?뿉 ?궫?엯 */
    /* EXEC SQL INSERT INTO menu_table(menuID, userID, fnameMain, fnameSub, fnameSide)
        VALUES(seq_number.NEXTVAL, : v_userId, : v_t_main_food_name, : v_t_sub_food_name, : v_t_side_food_name)
            RETURNING menuID INTO : v_menu_id; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 7;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "insert into menu_table (menuID,userID,fnameMain,fnameSub,\
fnameSide) values (seq_number.nextval ,:b0,:b1,:b2,:b3) returning menuID into \
:b4 ";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1064;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )1;
    sqlstm.sqhstv[0] = (         void  *)&v_userId;
    sqlstm.sqhstl[0] = (unsigned int  )52;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (         void  *)&v_t_main_food_name;
    sqlstm.sqhstl[1] = (unsigned int  )32;
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         void  *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned int  )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (         void  *)&v_t_sub_food_name;
    sqlstm.sqhstl[2] = (unsigned int  )32;
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         void  *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned int  )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqhstv[3] = (         void  *)&v_t_side_food_name;
    sqlstm.sqhstl[3] = (unsigned int  )32;
    sqlstm.sqhsts[3] = (         int  )0;
    sqlstm.sqindv[3] = (         void  *)0;
    sqlstm.sqinds[3] = (         int  )0;
    sqlstm.sqharm[3] = (unsigned int  )0;
    sqlstm.sqadto[3] = (unsigned short )0;
    sqlstm.sqtdso[3] = (unsigned short )0;
    sqlstm.sqhstv[4] = (         void  *)&v_menu_id;
    sqlstm.sqhstl[4] = (unsigned int  )sizeof(int);
    sqlstm.sqhsts[4] = (         int  )0;
    sqlstm.sqindv[4] = (         void  *)0;
    sqlstm.sqinds[4] = (         int  )0;
    sqlstm.sqharm[4] = (unsigned int  )0;
    sqlstm.sqadto[4] = (unsigned short )0;
    sqlstm.sqtdso[4] = (unsigned short )0;
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
        gotoxy(0, 23);
        printf("Failed to insert into menu_table. SQL Error: %s\n", sqlca.sqlerrm.sqlerrmc);
        getch();
        return;
    }

    /* composition_menu_table?뿉 ?궫?엯 (Main, Sub, Side) */
    /* EXEC SQL INSERT INTO composition_menu_table(menuID, fname, mDate, mTime)
        VALUES( : v_menu_id, : v_t_main_food_name, : v_current_date, : v_meal_time); */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 7;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "insert into composition_menu_table (menuID,fname,mDate,mT\
ime) values (:b0,:b1,:b2,:b3)";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1099;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&v_menu_id;
    sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (         void  *)&v_t_main_food_name;
    sqlstm.sqhstl[1] = (unsigned int  )32;
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         void  *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned int  )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (         void  *)v_current_date;
    sqlstm.sqhstl[2] = (unsigned int  )11;
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         void  *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned int  )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqhstv[3] = (         void  *)v_meal_time;
    sqlstm.sqhstl[3] = (unsigned int  )10;
    sqlstm.sqhsts[3] = (         int  )0;
    sqlstm.sqindv[3] = (         void  *)0;
    sqlstm.sqinds[3] = (         int  )0;
    sqlstm.sqharm[3] = (unsigned int  )0;
    sqlstm.sqadto[3] = (unsigned short )0;
    sqlstm.sqtdso[3] = (unsigned short )0;
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
        gotoxy(0, 23);
        printf("Failed to insert Main menu into composition_menu_table. SQL Error: %s\n", sqlca.sqlerrm.sqlerrmc);
        /* EXEC SQL ROLLBACK WORK; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 7;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )1130;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


        return;
    }

    /* EXEC SQL INSERT INTO composition_menu_table(menuID, fname, mDate, mTime)
        VALUES( : v_menu_id, : v_t_sub_food_name, : v_current_date, : v_meal_time); */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 7;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "insert into composition_menu_table (menuID,fname,mDate,mT\
ime) values (:b0,:b1,:b2,:b3)";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1145;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&v_menu_id;
    sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (         void  *)&v_t_sub_food_name;
    sqlstm.sqhstl[1] = (unsigned int  )32;
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         void  *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned int  )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (         void  *)v_current_date;
    sqlstm.sqhstl[2] = (unsigned int  )11;
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         void  *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned int  )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqhstv[3] = (         void  *)v_meal_time;
    sqlstm.sqhstl[3] = (unsigned int  )10;
    sqlstm.sqhsts[3] = (         int  )0;
    sqlstm.sqindv[3] = (         void  *)0;
    sqlstm.sqinds[3] = (         int  )0;
    sqlstm.sqharm[3] = (unsigned int  )0;
    sqlstm.sqadto[3] = (unsigned short )0;
    sqlstm.sqtdso[3] = (unsigned short )0;
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
        gotoxy(0, 23);
        printf("Failed to insert Sub menu into composition_menu_table. SQL Error: %s\n", sqlca.sqlerrm.sqlerrmc);
        /* EXEC SQL ROLLBACK WORK; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 7;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )1176;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


        return;
    }

    /* EXEC SQL INSERT INTO composition_menu_table(menuID, fname, mDate, mTime)
        VALUES( : v_menu_id, : v_t_side_food_name, : v_current_date, : v_meal_time); */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 7;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "insert into composition_menu_table (menuID,fname,mDate,mT\
ime) values (:b0,:b1,:b2,:b3)";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1191;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&v_menu_id;
    sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (         void  *)&v_t_side_food_name;
    sqlstm.sqhstl[1] = (unsigned int  )32;
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         void  *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned int  )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (         void  *)v_current_date;
    sqlstm.sqhstl[2] = (unsigned int  )11;
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         void  *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned int  )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqhstv[3] = (         void  *)v_meal_time;
    sqlstm.sqhstl[3] = (unsigned int  )10;
    sqlstm.sqhsts[3] = (         int  )0;
    sqlstm.sqindv[3] = (         void  *)0;
    sqlstm.sqinds[3] = (         int  )0;
    sqlstm.sqharm[3] = (unsigned int  )0;
    sqlstm.sqadto[3] = (unsigned short )0;
    sqlstm.sqtdso[3] = (unsigned short )0;
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
        gotoxy(0, 23);
        printf("Failed to insert Side menu into composition_menu_table. SQL Error: %s\n", sqlca.sqlerrm.sqlerrmc);
        /* EXEC SQL ROLLBACK WORK; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 7;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )1222;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


        return;
    }

    v_menu_cal = v_t_menu_cal;

    /* EXEC SQL COMMIT WORK; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 7;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1237;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}

 // ?듃?옖?옲?뀡 而ㅻ컠
}

void get_today_menu()
{
    /* EXEC SQL BEGIN DECLARE SECTION; */ 

    char v_meal_time[10];
    char sqlstmt[1024];
    /* EXEC SQL END DECLARE SECTION; */ 


    set_meal_time(v_meal_time);

    snprintf(sqlstmt, sizeof(sqlstmt),
             "SELECT m.fnameMain, m.fnameSub, m.fnameSide, "
             "(SELECT SUM(f.calorie) "
             " FROM composition_menu_table cm2 "
             " JOIN food_table f ON cm2.fname = f.fname "
             " WHERE cm2.menuID = m.menuID) AS total_calorie "
             "FROM menu_table m, composition_menu_table cm "
             "WHERE m.menuID = cm.menuID "
             "AND m.userID = '%s' "
             "AND cm.mDate = TRUNC(SYSDATE) "
             "AND cm.mTime = '%s'",
             v_userId.arr, v_meal_time);

    /* EXEC SQL PREPARE S FROM : sqlstmt; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 7;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1252;
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


    /* EXEC SQL DECLARE menu_cursor CURSOR FOR S; */ 

    /* EXEC SQL OPEN menu_cursor; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 7;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1271;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.sqlpfmem = (unsigned int  )0;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqcmod = (unsigned int )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    /* EXEC SQL FETCH menu_cursor INTO : v_main_food_name, : v_sub_food_name, : v_side_food_name, : v_menu_cal; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 7;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1286;
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
    sqlstm.sqhstv[1] = (         void  *)&v_sub_food_name;
    sqlstm.sqhstl[1] = (unsigned int  )32;
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         void  *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned int  )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (         void  *)&v_side_food_name;
    sqlstm.sqhstl[2] = (unsigned int  )32;
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         void  *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned int  )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqhstv[3] = (         void  *)&v_menu_cal;
    sqlstm.sqhstl[3] = (unsigned int  )sizeof(float);
    sqlstm.sqhsts[3] = (         int  )0;
    sqlstm.sqindv[3] = (         void  *)0;
    sqlstm.sqinds[3] = (         int  )0;
    sqlstm.sqharm[3] = (unsigned int  )0;
    sqlstm.sqadto[3] = (unsigned short )0;
    sqlstm.sqtdso[3] = (unsigned short )0;
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
    { /* 데이터가 없을 경우 */
        /* EXEC SQL CLOSE menu_cursor; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 7;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )1317;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


        return;
    }
    else if (sqlca.sqlcode != 0)
    { /* 기타 오류 처리 */
        printf("SQL Error: %s\n", sqlca.sqlerrm.sqlerrmc);
        getch();
        /* EXEC SQL CLOSE menu_cursor; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 7;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )1332;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


        return;
    }

    v_main_food_name.arr[v_main_food_name.len] = '\0';
    v_sub_food_name.arr[v_sub_food_name.len] = '\0';
    v_side_food_name.arr[v_side_food_name.len] = '\0';

    /* EXEC SQL CLOSE menu_cursor; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 7;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1347;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


}