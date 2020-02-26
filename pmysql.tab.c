/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 5 "pmysql.y" /* yacc.c:339  */

#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

void yyerror(char *s, ...);
void emit(char *s, ...);

#line 75 "pmysql.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "pmysql.tab.h".  */
#ifndef YY_YY_PMYSQL_TAB_H_INCLUDED
# define YY_YY_PMYSQL_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    NAME = 258,
    STRING = 259,
    INTNUM = 260,
    BOOL = 261,
    APPROXNUM = 262,
    USERVAR = 263,
    ASSIGN = 264,
    OR = 265,
    XOR = 266,
    ANDOP = 267,
    IN = 268,
    IS = 269,
    LIKE = 270,
    REGEXP = 271,
    NOT = 272,
    BETWEEN = 273,
    COMPARISON = 274,
    SHIFT = 275,
    MOD = 276,
    UMINUS = 277,
    ADD = 278,
    ALL = 279,
    ALTER = 280,
    ANALYZE = 281,
    AND = 282,
    ANY = 283,
    AS = 284,
    ASC = 285,
    AUTO_INCREMENT = 286,
    BEFORE = 287,
    BIGINT = 288,
    BINARY = 289,
    BIT = 290,
    BLOB = 291,
    BOTH = 292,
    BY = 293,
    CALL = 294,
    CASCADE = 295,
    CASE = 296,
    CHANGE = 297,
    CHAR = 298,
    CHECK = 299,
    COLLATE = 300,
    COLUMN = 301,
    COMMENT = 302,
    CONDITION = 303,
    CONSTRAINT = 304,
    CONTINUE = 305,
    CONVERT = 306,
    CREATE = 307,
    CROSS = 308,
    CURRENT_DATE = 309,
    CURRENT_TIME = 310,
    CURRENT_TIMESTAMP = 311,
    CURRENT_USER = 312,
    CURSOR = 313,
    DATABASE = 314,
    DATABASES = 315,
    DATE = 316,
    DATETIME = 317,
    DAY_HOUR = 318,
    DAY_MICROSECOND = 319,
    DAY_MINUTE = 320,
    DAY_SECOND = 321,
    DECIMAL = 322,
    DECLARE = 323,
    DEFAULT = 324,
    DELAYED = 325,
    DELETE = 326,
    DESC = 327,
    DESCRIBE = 328,
    DETERMINISTIC = 329,
    DISTINCT = 330,
    DISTINCTROW = 331,
    DIV = 332,
    DOUBLE = 333,
    DROP = 334,
    DUAL = 335,
    EACH = 336,
    ELSE = 337,
    ELSEIF = 338,
    END = 339,
    ENUM = 340,
    EXIT = 341,
    EXPLAIN = 342,
    FETCH = 343,
    FLOAT = 344,
    FOR = 345,
    FORCE = 346,
    FOREIGN = 347,
    FROM = 348,
    FULLTEXT = 349,
    GRANT = 350,
    GROUP = 351,
    HAVING = 352,
    HIGH_PRIORITY = 353,
    HOUR_MICROSECOND = 354,
    HOUR_MINUTE = 355,
    HOUR_SECOND = 356,
    IF = 357,
    IGNORE = 358,
    INFILE = 359,
    INDEX = 360,
    INNER = 361,
    INOUT = 362,
    INSENSITIVE = 363,
    INSERT = 364,
    INT = 365,
    INTEGER = 366,
    INTERVAL = 367,
    INTO = 368,
    ITERATE = 369,
    JOIN = 370,
    KEY = 371,
    KEYS = 372,
    KILL = 373,
    LEADING = 374,
    LEAVE = 375,
    LEFT = 376,
    LIMIT = 377,
    LINES = 378,
    LOAD = 379,
    LOCALTIME = 380,
    LOCALTIMESTAMP = 381,
    LOCK = 382,
    LONG = 383,
    LONGBLOB = 384,
    LONGTEXT = 385,
    LOOP = 386,
    LOW_PRIORITY = 387,
    MATCH = 388,
    MEDIUMBLOB = 389,
    MEDIUMINT = 390,
    MEDIUMTEXT = 391,
    MINUTE_MICROSECOND = 392,
    MINUTE_SECOND = 393,
    MODIFIES = 394,
    NATURAL = 395,
    NO_WRITE_TO_BINLOG = 396,
    NULLX = 397,
    NUMBER = 398,
    ON = 399,
    ONDUPLICATE = 400,
    OPTIMIZE = 401,
    OPTION = 402,
    OPTIONALLY = 403,
    ORDER = 404,
    OUT = 405,
    OUTER = 406,
    OUTFILE = 407,
    PRECISION = 408,
    PRIMARY = 409,
    PROCEDURE = 410,
    PURGE = 411,
    QUICK = 412,
    READ = 413,
    READS = 414,
    REAL = 415,
    REFERENCES = 416,
    RELEASE = 417,
    RENAME = 418,
    REPEAT = 419,
    REPLACE = 420,
    REQUIRE = 421,
    RESTRICT = 422,
    RETURN = 423,
    REVOKE = 424,
    RIGHT = 425,
    ROLLUP = 426,
    SCHEMA = 427,
    SCHEMAS = 428,
    SECOND_MICROSECOND = 429,
    SELECT = 430,
    SENSITIVE = 431,
    SEPARATOR = 432,
    SET = 433,
    SHOW = 434,
    SMALLINT = 435,
    SOME = 436,
    SONAME = 437,
    SPATIAL = 438,
    SPECIFIC = 439,
    SQL = 440,
    SQLEXCEPTION = 441,
    SQLSTATE = 442,
    SQLWARNING = 443,
    SQL_BIG_RESULT = 444,
    SQL_CALC_FOUND_ROWS = 445,
    SQL_SMALL_RESULT = 446,
    SSL = 447,
    STARTING = 448,
    STRAIGHT_JOIN = 449,
    TABLE = 450,
    TEMPORARY = 451,
    TERMINATED = 452,
    TEXT = 453,
    THEN = 454,
    TIME = 455,
    TIMESTAMP = 456,
    TINYBLOB = 457,
    TINYINT = 458,
    TINYTEXT = 459,
    TO = 460,
    TRAILING = 461,
    TRIGGER = 462,
    UNDO = 463,
    UNION = 464,
    UNIQUE = 465,
    UNLOCK = 466,
    UNSIGNED = 467,
    UPDATE = 468,
    USAGE = 469,
    USE = 470,
    USING = 471,
    UTC_DATE = 472,
    UTC_TIME = 473,
    UTC_TIMESTAMP = 474,
    VALUES = 475,
    VARBINARY = 476,
    VARCHAR = 477,
    VARYING = 478,
    WHEN = 479,
    WHERE = 480,
    WHILE = 481,
    WITH = 482,
    WRITE = 483,
    YEAR = 484,
    YEAR_MONTH = 485,
    ZEROFILL = 486,
    ESCAPED = 487,
    EXISTS = 488,
    FSUBSTRING = 489,
    FTRIM = 490,
    FDATE_ADD = 491,
    FDATE_SUB = 492,
    FCOUNT = 493
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 14 "pmysql.y" /* yacc.c:355  */

        int intval;
        double floatval;
        char *strval;
        int subtok;

#line 361 "pmysql.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PMYSQL_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 378 "pmysql.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  31
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1493

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  253
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  74
/* YYNRULES -- Number of rules.  */
#define YYNRULES  300
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  620

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   493

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    18,     2,     2,     2,    28,    22,     2,
     250,   251,    26,    24,   252,    25,   249,    27,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   248,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    30,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    21,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    19,    20,    23,    29,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   287,   287,   288,   293,   294,   295,   296,   297,   298,
     299,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   321,   322,
     323,   324,   327,   328,   329,   330,   332,   335,   338,   339,
     342,   343,   346,   347,   348,   349,   350,   354,   358,   359,
     361,   362,   363,   365,   366,   369,   370,   371,   374,   375,
     378,   379,   380,   381,   382,   383,   384,   385,   386,   388,
     389,   390,   391,   394,   395,   398,   399,   402,   403,   406,
     407,   408,   411,   416,   419,   422,   428,   429,   431,   432,
     436,   438,   442,   443,   444,   447,   448,   451,   452,   454,
     455,   458,   458,   459,   462,   463,   466,   467,   470,   471,
     473,   475,   477,   479,   481,   483,   485,   490,   491,   492,
     495,   497,   498,   499,   502,   503,   506,   507,   511,   512,
     514,   515,   518,   519,   523,   525,   527,   529,   531,   535,
     536,   537,   540,   541,   544,   545,   548,   549,   550,   553,
     554,   557,   558,   562,   564,   566,   568,   571,   572,   575,
     576,   579,   584,   588,   593,   594,   595,   596,   600,   605,
     606,   610,   610,   613,   621,   624,   630,   631,   634,   635,
     636,   637,   638,   641,   641,   644,   645,   648,   649,   652,
     653,   654,   655,   657,   664,   667,   670,   673,   678,   684,
     687,   693,   699,   705,   708,   715,   716,   717,   721,   724,
     727,   730,   738,   742,   744,   748,   749,   755,   758,   762,
     767,   772,   776,   782,   787,   788,   791,   792,   795,   796,
     797,   798,   799,   802,   802,   805,   806,   807,   808,   810,
     812,   814,   816,   818,   820,   821,   822,   823,   827,   828,
     829,   832,   833,   836,   837,   838,   841,   842,   843,   847,
     848,   849,   850,   851,   852,   853,   854,   855,   856,   857,
     858,   859,   860,   861,   862,   863,   864,   865,   866,   867,
     868,   869,   870,   871,   872,   873,   874,   875,   876,   879,
     880,   883,   886,   887,   888,   893,   896,   898,   898,   901,
     903
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NAME", "STRING", "INTNUM", "BOOL",
  "APPROXNUM", "USERVAR", "ASSIGN", "OR", "XOR", "ANDOP", "IN", "IS",
  "LIKE", "REGEXP", "NOT", "'!'", "BETWEEN", "COMPARISON", "'|'", "'&'",
  "SHIFT", "'+'", "'-'", "'*'", "'/'", "'%'", "MOD", "'^'", "UMINUS",
  "ADD", "ALL", "ALTER", "ANALYZE", "AND", "ANY", "AS", "ASC",
  "AUTO_INCREMENT", "BEFORE", "BIGINT", "BINARY", "BIT", "BLOB", "BOTH",
  "BY", "CALL", "CASCADE", "CASE", "CHANGE", "CHAR", "CHECK", "COLLATE",
  "COLUMN", "COMMENT", "CONDITION", "CONSTRAINT", "CONTINUE", "CONVERT",
  "CREATE", "CROSS", "CURRENT_DATE", "CURRENT_TIME", "CURRENT_TIMESTAMP",
  "CURRENT_USER", "CURSOR", "DATABASE", "DATABASES", "DATE", "DATETIME",
  "DAY_HOUR", "DAY_MICROSECOND", "DAY_MINUTE", "DAY_SECOND", "DECIMAL",
  "DECLARE", "DEFAULT", "DELAYED", "DELETE", "DESC", "DESCRIBE",
  "DETERMINISTIC", "DISTINCT", "DISTINCTROW", "DIV", "DOUBLE", "DROP",
  "DUAL", "EACH", "ELSE", "ELSEIF", "END", "ENUM", "EXIT", "EXPLAIN",
  "FETCH", "FLOAT", "FOR", "FORCE", "FOREIGN", "FROM", "FULLTEXT", "GRANT",
  "GROUP", "HAVING", "HIGH_PRIORITY", "HOUR_MICROSECOND", "HOUR_MINUTE",
  "HOUR_SECOND", "IF", "IGNORE", "INFILE", "INDEX", "INNER", "INOUT",
  "INSENSITIVE", "INSERT", "INT", "INTEGER", "INTERVAL", "INTO", "ITERATE",
  "JOIN", "KEY", "KEYS", "KILL", "LEADING", "LEAVE", "LEFT", "LIMIT",
  "LINES", "LOAD", "LOCALTIME", "LOCALTIMESTAMP", "LOCK", "LONG",
  "LONGBLOB", "LONGTEXT", "LOOP", "LOW_PRIORITY", "MATCH", "MEDIUMBLOB",
  "MEDIUMINT", "MEDIUMTEXT", "MINUTE_MICROSECOND", "MINUTE_SECOND",
  "MODIFIES", "NATURAL", "NO_WRITE_TO_BINLOG", "NULLX", "NUMBER", "ON",
  "ONDUPLICATE", "OPTIMIZE", "OPTION", "OPTIONALLY", "ORDER", "OUT",
  "OUTER", "OUTFILE", "PRECISION", "PRIMARY", "PROCEDURE", "PURGE",
  "QUICK", "READ", "READS", "REAL", "REFERENCES", "RELEASE", "RENAME",
  "REPEAT", "REPLACE", "REQUIRE", "RESTRICT", "RETURN", "REVOKE", "RIGHT",
  "ROLLUP", "SCHEMA", "SCHEMAS", "SECOND_MICROSECOND", "SELECT",
  "SENSITIVE", "SEPARATOR", "SET", "SHOW", "SMALLINT", "SOME", "SONAME",
  "SPATIAL", "SPECIFIC", "SQL", "SQLEXCEPTION", "SQLSTATE", "SQLWARNING",
  "SQL_BIG_RESULT", "SQL_CALC_FOUND_ROWS", "SQL_SMALL_RESULT", "SSL",
  "STARTING", "STRAIGHT_JOIN", "TABLE", "TEMPORARY", "TERMINATED", "TEXT",
  "THEN", "TIME", "TIMESTAMP", "TINYBLOB", "TINYINT", "TINYTEXT", "TO",
  "TRAILING", "TRIGGER", "UNDO", "UNION", "UNIQUE", "UNLOCK", "UNSIGNED",
  "UPDATE", "USAGE", "USE", "USING", "UTC_DATE", "UTC_TIME",
  "UTC_TIMESTAMP", "VALUES", "VARBINARY", "VARCHAR", "VARYING", "WHEN",
  "WHERE", "WHILE", "WITH", "WRITE", "YEAR", "YEAR_MONTH", "ZEROFILL",
  "ESCAPED", "EXISTS", "FSUBSTRING", "FTRIM", "FDATE_ADD", "FDATE_SUB",
  "FCOUNT", "';'", "'.'", "'('", "')'", "','", "$accept", "stmt_list",
  "expr", "val_list", "opt_val_list", "trim_ltb", "interval_exp",
  "case_list", "stmt", "select_stmt", "opt_where", "opt_groupby",
  "groupby_list", "opt_asc_desc", "opt_with_rollup", "opt_having",
  "opt_orderby", "opt_limit", "opt_into_list", "column_list",
  "select_opts", "select_expr_list", "select_expr", "opt_as_alias",
  "table_references", "table_reference", "table_factor", "opt_as",
  "join_table", "opt_inner_cross", "opt_outer", "left_or_right",
  "opt_left_or_right_outer", "opt_join_condition", "join_condition",
  "index_hint", "opt_for_join", "index_list", "table_subquery",
  "delete_stmt", "delete_opts", "delete_list", "opt_dot_star",
  "insert_stmt", "opt_ondupupdate", "insert_opts", "opt_into",
  "opt_col_names", "insert_vals_list", "insert_vals", "insert_asgn_list",
  "replace_stmt", "update_stmt", "update_opts", "update_asgn_list",
  "create_database_stmt", "opt_if_not_exists", "create_table_stmt",
  "opt_temporary", "create_col_list", "create_definition", "$@1",
  "column_atts", "opt_length", "opt_binary", "opt_uz", "opt_csc",
  "data_type", "enum_list", "create_select_statement",
  "opt_ignore_replace", "set_stmt", "set_list", "set_expr", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,    33,   273,
     274,   124,    38,   275,    43,    45,    42,    47,    37,   276,
      94,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   409,   410,   411,   412,   413,   414,   415,
     416,   417,   418,   419,   420,   421,   422,   423,   424,   425,
     426,   427,   428,   429,   430,   431,   432,   433,   434,   435,
     436,   437,   438,   439,   440,   441,   442,   443,   444,   445,
     446,   447,   448,   449,   450,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,   477,   478,   479,   480,   481,   482,   483,   484,   485,
     486,   487,   488,   489,   490,   491,   492,   493,    59,    46,
      40,    41,    44
};
# endif

#define YYPACT_NINF -366

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-366)))

#define YYTABLE_NINF -220

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-220)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     375,   -55,  -366,  -366,  -366,  -366,    79,     2,    95,  -198,
    -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,    -4,    -4,
    -366,   -77,    36,   136,   136,   126,    44,  -103,  -366,   209,
       3,  -366,   -87,  -366,   -72,   213,   231,    -4,   -12,   238,
    -366,  -366,  -366,   -94,  -366,  -366,  -366,  -366,  -366,   256,
     264,   -43,  -366,  -366,  -366,  -366,   217,   550,   550,   550,
    -366,  -366,   550,   175,  -366,  -366,  -366,  -366,  -366,  -366,
    -366,  -366,  -366,  -366,    28,    31,    40,    47,    52,    62,
    1349,   -84,  -366,   550,   550,    79,     4,     6,     8,     1,
    -115,   174,  -366,  -366,   254,  -366,  -366,  -366,  -366,   312,
     294,  -366,   -22,   -29,     3,   327,  -147,  -146,   343,   550,
     550,   618,   618,  -366,  -366,   550,   945,   -49,   164,   550,
     268,   550,   550,   337,  -366,   550,   550,   550,   102,    14,
     550,   550,    60,   550,    18,   550,   550,   550,   550,   550,
     550,   550,   550,   550,   550,   355,  -366,     3,   550,  1406,
    1406,  -366,   357,   -23,   113,   -30,   363,     3,  -366,  -366,
    -366,   -59,  -366,     3,   275,   249,  -366,   413,   -52,  -366,
     550,   265,     3,   -81,   -12,   453,   466,  -137,   453,  -136,
    -366,   661,  -366,   187,  1406,  1022,   -39,   550,  -366,   550,
     241,   606,   251,  -366,  -366,  -366,   258,   550,   711,   761,
     271,   840,  1426,  1445,   977,   407,  -366,    22,  -366,  1463,
    1463,   232,   550,   550,  1379,   239,   274,   284,   164,   634,
     726,   435,   733,   308,   308,   505,   505,   505,   505,  -366,
    -366,   -81,  -366,    42,   414,   417,   419,  -366,  -366,  -366,
     -18,   -48,   174,   249,   249,   421,   393,     3,  -366,   428,
    -366,  -366,  -366,   544,   121,  -366,   254,  1406,   513,   430,
     -81,  -366,  -366,   549,  -124,  -366,    43,   320,   418,  -124,
     320,   418,   550,  -366,   550,   550,  -366,  1274,  1051,  -366,
     550,  -366,  -366,  1181,   450,   450,  -366,  -366,   323,   325,
    -366,  -366,   407,  1463,  1463,   550,   164,   164,   164,   326,
     480,   -23,   490,   490,   490,   550,   587,   589,   265,  -366,
    -366,     3,   550,   -65,     3,   -83,   -51,   344,   345,   471,
      56,  -366,   595,   164,   550,   550,  -366,  -366,   423,   474,
     621,  -366,  -366,   676,   473,  -105,  -366,  -366,  -105,  -366,
    -366,  1406,  1295,  -366,   550,   809,   550,   550,   443,   447,
    -366,  -366,   448,   452,   582,   454,   456,   458,  -366,   654,
     604,  -366,   588,   461,   463,   464,  1406,   709,   -17,   430,
    -366,  1406,   550,   514,  -366,  -366,   -65,   121,  -366,   529,
     556,   466,   466,   577,   -34,   121,  1044,  -366,  1316,   590,
     788,  -366,  1406,   619,   820,  -366,  -366,  1406,    76,   593,
    -366,  -366,  -366,  1406,   550,  -366,   594,   914,  -366,  -366,
    -366,  -366,  -366,  -366,  -366,   550,   550,   265,  -366,   841,
     841,   841,   550,   550,   843,  -366,  1406,   466,  -366,   105,
     466,   466,   134,   137,   466,  -366,  -366,   597,   597,   597,
    -366,   597,  -366,  -366,   597,   597,   598,   597,   597,   597,
    -366,   806,  -366,   597,   806,   597,   629,   597,   806,  -366,
    -366,  -366,   597,   806,   643,   644,  -366,  -366,  -366,  -366,
    -366,   550,   550,   453,   500,  -366,   523,   473,   861,  -366,
    -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,  -166,
    1406,   430,  -366,   141,   143,   152,  1406,  1406,   877,   154,
     -28,   182,   192,  -366,  -366,   216,   894,  -366,  -366,  -366,
    -366,  -366,  -366,   896,  -366,  -366,  -366,  -366,  -366,  -366,
    -366,  -366,   896,  -366,  -366,  -366,  -366,   898,   902,   188,
    1316,  1406,   657,  -366,  1406,  -366,  1406,   223,  -366,   731,
    -366,   793,  -366,   913,  -366,  -366,   550,  -366,  -366,  -366,
    -366,  -366,   233,   -66,   193,   -66,   -66,  -366,   243,   -66,
     -66,   -66,   193,   -66,   193,   -66,   245,   -66,   193,   -66,
     193,   666,   667,   769,  -366,   918,   377,  -366,  -366,   798,
    -111,  -366,  -366,  -366,   466,  -366,  -366,  1406,  -366,   927,
    -366,  -366,   758,   942,  -366,   943,  -366,  -366,  -366,  -366,
    -366,  -366,  -366,  -366,  -366,  -366,  -366,   466,   696,   698,
     946,  -366,   193,  -366,   193,   193,   248,  -366,  -366,  -366
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,   224,   167,   178,   178,   108,     0,   178,     0,     0,
      83,   162,   174,   199,   203,   212,   217,   295,   215,   215,
     225,     0,     0,   184,   184,     0,     0,   296,   297,     0,
       0,     1,     0,     2,     0,     0,     0,   215,   171,     0,
     166,   164,   165,     0,   180,   181,   182,   183,   179,     0,
       0,     4,     7,     8,    10,     9,     6,     0,     0,     0,
     119,   109,     0,     0,    80,    81,    79,   110,   111,   112,
     115,   116,   114,   113,     0,     0,     0,     0,     0,     0,
     123,    84,   117,     0,     0,     0,   182,   179,   123,     0,
       0,   124,   126,   127,   133,     3,   216,   213,   214,     0,
       0,   169,    86,     0,     0,     0,   185,   185,     0,    40,
       0,    25,    26,    17,    82,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   122,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   120,     0,     0,   300,
     299,   298,     0,   156,     0,     0,     0,     0,   141,   140,
     144,   148,   145,     0,     0,   142,   132,     0,   292,   172,
       0,    99,     0,    86,   171,     0,     0,     0,     0,     0,
       5,    38,    41,     0,    36,     0,     0,     0,    71,     0,
       0,    38,     0,    57,    55,    56,     0,     0,     0,     0,
       0,     0,    19,    20,    18,     0,    34,     0,    32,    75,
      77,     0,     0,     0,     0,     0,     0,     0,     0,    27,
      21,    22,    24,    11,    12,    13,    14,    15,    16,    23,
     121,    86,   118,   123,     0,     0,     0,   128,   161,   131,
       0,    86,   125,   142,   142,     0,   135,     0,   143,     0,
     130,   293,   294,     0,   233,   221,   133,    87,     0,   101,
      86,   168,   170,     0,   176,   106,     0,     0,   176,   176,
       0,   176,     0,    47,     0,     0,    69,     0,     0,    46,
       0,    50,    53,     0,     0,     0,    48,    49,     0,     0,
      35,    33,     0,    76,    78,     0,     0,     0,     0,     0,
      88,   156,   158,   158,   158,     0,     0,     0,    99,   146,
     147,     0,     0,   149,     0,   292,     0,     0,     0,     0,
       0,   226,     0,     0,     0,     0,   163,   173,     0,     0,
       0,   193,   186,     0,     0,   176,   198,   201,   176,   202,
      39,    73,     0,    72,     0,     0,     0,     0,     0,     0,
      42,    44,     0,     0,    37,     0,     0,     0,    28,     0,
      97,   129,     0,     0,     0,     0,   208,     0,     0,   101,
     138,   136,     0,     0,   134,   150,     0,   233,   223,     0,
       0,     0,     0,     0,   292,   233,     0,   291,    92,   100,
     102,   195,   194,     0,     0,   107,   190,   189,     0,     0,
     175,   200,    70,    74,     0,    51,     0,     0,    58,    59,
      43,    45,    31,    29,    30,     0,     0,    99,   157,     0,
       0,     0,     0,     0,     0,   204,   151,     0,   137,     0,
       0,     0,     0,     0,     0,   220,   227,   248,   248,   248,
     280,   248,   270,   273,   248,   248,     0,   248,   248,   248,
     282,   251,   281,   248,   251,   248,     0,   248,   251,   271,
     272,   279,   248,   251,     0,     0,   274,   235,    93,    94,
      90,     0,     0,     0,     0,   187,     0,     0,     0,    54,
      60,    61,    62,    63,    66,    67,    68,    65,    64,    95,
      98,   101,   159,     0,     0,     0,   209,   210,     0,     0,
     292,     0,     0,   230,   229,     0,     0,   253,   277,   259,
     256,   253,   253,     0,   253,   253,   253,   252,   256,   253,
     256,   253,     0,   253,   256,   253,   256,     0,     0,   234,
      92,   103,   177,   197,   196,   192,   191,     0,    52,     0,
      89,   104,   155,     0,   154,   153,     0,   152,   222,   231,
     232,   228,     0,   265,   275,   269,   267,   289,     0,   268,
     263,   264,   286,   262,   285,   266,     0,   261,   284,   260,
     283,     0,     0,     0,   242,     0,     0,   246,   237,     0,
       0,    91,   188,    96,     0,    85,   160,   211,   249,     0,
     254,   255,     0,     0,   256,     0,   256,   278,   256,   236,
     247,   238,   239,   241,   240,   245,   244,     0,   105,     0,
       0,   258,   287,   290,   288,   276,     0,   250,   257,   243
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -366,  -366,   -25,   -63,  -366,  -366,   668,   835,   944,   803,
    -106,  -366,   539,   446,  -366,  -366,  -281,  -350,  -366,  -365,
    -366,  -366,   829,   -76,   202,   821,  -148,   723,  -366,  -366,
     210,  -366,  -366,  -366,   605,   682,   229,    99,  -366,  -366,
    -366,   956,   810,  -366,   107,   117,   961,   903,   739,   534,
    -177,  -366,  -366,  -366,  -366,  -366,   180,  -366,  -366,   635,
     630,  -366,  -366,   457,  -153,   181,  -159,  -366,   492,  -305,
    -366,  -366,  -366,   931
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     8,   181,   182,   183,   197,   348,   117,     9,    10,
     171,   360,   389,   470,   540,   417,   259,   326,   585,   266,
      25,    81,    82,   146,    90,    91,    92,   167,    93,   164,
     249,   165,   245,   374,   375,   237,   363,   493,    94,    11,
      22,    43,   101,    12,   331,    23,    49,   177,   335,   398,
     264,    13,    14,    30,   241,    15,    35,    16,    21,   320,
     321,   322,   529,   507,   518,   553,   554,   467,   558,   255,
     256,    17,    27,    28
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      80,   269,   305,   423,    88,  -205,    88,  -207,   104,  -206,
     378,   124,   153,    18,   606,   246,   432,   433,   147,   425,
     206,    51,    52,    53,    54,    55,    56,   369,   290,   251,
     329,   207,   111,   112,   113,    57,    58,   114,   116,    38,
     175,   178,   187,    59,   188,   124,   145,     5,     5,   329,
      33,   215,   275,    83,   276,   216,   192,   196,   149,   150,
     251,    62,   499,   379,    84,   501,   502,   261,    63,   505,
     539,   243,   156,   211,   380,   212,   213,   234,   251,   435,
     145,    64,    65,    66,   251,   184,   471,    26,   372,   235,
     185,   252,   267,   270,   191,    31,   198,   199,   201,   313,
     202,   203,   204,   176,   176,   209,   210,    34,   214,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     244,    24,   252,    80,    29,   300,    19,    37,   330,    51,
      52,    53,    54,    55,    56,   308,   491,   157,    39,   607,
     252,   541,   288,    57,    58,   257,   252,   399,    40,    85,
      20,    59,    60,   170,   327,   590,     1,   301,   105,    61,
     373,    95,   277,   370,   278,   208,   376,   377,   148,    62,
      96,   157,   283,   291,   591,     2,    63,    41,    51,    52,
      53,    54,    55,    56,   189,     5,   170,   293,   294,    64,
      65,    66,    57,    58,   189,   548,   172,   253,   254,    36,
      59,   236,    42,  -171,   307,   573,   108,   109,   217,   340,
      67,    68,   170,     3,  -218,    44,    97,    99,    62,   608,
    -219,   239,   157,   105,   316,    63,   110,   100,   574,   352,
    -171,   306,   424,    69,    98,   317,   158,   100,    64,    65,
      66,   102,   616,    45,   575,   592,   318,   593,    46,   341,
     342,    89,  -205,    89,  -207,   345,  -206,   152,    47,   106,
      74,    75,    76,    77,    78,    79,   576,   107,   218,     4,
     354,    51,    52,    53,    54,    55,    56,    48,   118,     5,
     366,   119,     6,   406,   319,    57,    58,   371,    44,   159,
     120,   155,   166,    59,   332,   333,   532,   121,  -139,   388,
     390,   520,   122,   392,   160,   524,   173,   384,   385,   397,
     526,    62,   123,   577,   193,   168,    45,     7,    63,   403,
     169,    86,   407,   161,    70,    71,    72,   475,   476,    73,
     174,    64,    65,    66,   140,   141,   142,   143,   144,   578,
      51,    52,    53,    54,    55,    56,   180,   426,     5,   231,
      87,   579,   205,   162,    57,    58,   500,   385,   230,   562,
     233,   564,    59,   200,   238,   568,   240,   570,    74,    75,
      76,    77,    78,    79,   260,   336,   337,   163,   339,   478,
      62,   601,   602,   603,   604,   503,   333,    63,   504,   333,
     388,   490,   542,   543,   544,   543,   194,   496,   497,   247,
      64,    65,    66,   545,   543,   547,   333,   580,   115,   248,
      51,    52,    53,    54,    55,    56,   250,    74,    75,    76,
      77,    78,    79,   258,    57,    58,    51,    52,    53,    54,
      55,    56,    59,   549,   333,   612,     1,   614,   273,   615,
      57,    58,   400,   550,   333,   401,   530,   531,    59,   534,
      62,   536,   397,   309,   310,     2,   263,    63,   137,   138,
     139,   140,   141,   142,   143,   144,    62,   551,   333,   265,
      64,    65,    66,    63,   582,   476,    51,    52,    53,    54,
      55,    56,   292,   195,   588,   589,    64,    65,    66,   296,
      57,    58,   279,     3,   594,   595,   596,   595,    59,   619,
     333,   391,   281,    51,    52,    53,    54,    55,    56,   282,
      74,    75,    76,    77,    78,    79,    62,    57,    58,   494,
     495,   587,   286,    63,   297,    59,    51,    52,    53,    54,
      55,    56,   364,   365,   298,   144,    64,    65,    66,   302,
      57,    58,   303,    62,   304,   311,   312,   315,    59,     4,
      63,   396,   314,    51,    52,    53,    54,    55,    56,     5,
     324,   325,     6,    64,    65,    66,    62,    57,    58,   328,
     334,   347,   329,    63,   350,    59,   351,   358,   533,    74,
      75,    76,    77,    78,    79,   359,    64,    65,    66,   362,
     367,     5,   368,    62,   381,   382,   383,     7,   386,   393,
      63,   535,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,    64,    65,    66,   125,   126,   127,   128,
     129,   130,   131,   132,   394,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,    74,
      75,    76,    77,    78,    79,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,    74,    75,    76,    77,    78,
      79,   125,   126,   127,   128,   129,   130,   131,   132,   395,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   555,   556,   408,   559,   560,   561,   409,   410,
     563,   415,   565,   411,   567,   412,   569,   413,   280,   414,
     416,   419,   418,   420,   421,    74,    75,    76,    77,    78,
      79,   125,   126,   127,   128,   129,   130,   131,   132,   422,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,    74,    75,    76,    77,    78,    79,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   138,   139,   140,
     141,   142,   143,   144,   427,    74,    75,    76,    77,    78,
      79,   125,   126,   127,   128,   129,   130,   131,   132,   430,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,    74,    75,    76,    77,    78,    79,   125,   126,
     127,   128,   129,   130,   131,   132,   431,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   125,
     126,   127,   128,   129,   130,   131,   132,   434,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     474,   473,   471,   477,   492,   479,   498,   506,   513,   517,
     125,   126,   127,   128,   129,   130,   131,   132,   272,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   125,   126,   127,   128,   129,   130,   131,   132,   522,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   154,   527,   528,   508,   509,   546,   510,   552,
     557,   511,   512,   571,   514,   515,   516,   572,   404,   330,
     519,   583,   521,   272,   523,   584,   586,   597,   598,   525,
     599,   190,   600,   605,   125,   126,   127,   128,   129,   130,
     131,   132,   609,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   610,   611,   613,   333,   617,
     618,   186,    32,   349,   489,   125,   126,   127,   128,   129,
     130,   131,   132,   284,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   581,   232,   242,   323,
     268,   428,   271,   361,   262,    50,   480,   481,   482,   483,
     128,   129,   130,   131,   132,   103,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   289,   338,
     179,   537,   429,   285,   566,   436,   151,     0,     0,     0,
       0,   299,   484,   485,   486,     0,     0,     0,     0,     0,
       0,     0,   125,   126,   127,   128,   129,   130,   131,   132,
     472,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,     0,     0,     0,     0,     0,     0,     0,
     405,   125,   126,   127,   128,   129,   130,   131,   132,     0,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,     0,     0,     0,     0,   437,   438,   439,   440,
       0,   287,     0,     0,     0,   353,   441,     0,     0,   355,
     356,   357,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   538,     0,   442,   443,     0,     0,     0,     0,
     444,     0,     0,     0,     0,     0,   387,     0,     0,     0,
       0,   445,     0,     0,     0,     0,     0,     0,   446,     0,
       0,     0,   447,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   487,   488,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   448,   449,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   115,     0,
       0,     0,   450,   451,     0,     0,     0,   452,   453,   454,
       0,   125,   126,   127,   128,   129,   130,   131,   132,     0,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,     0,   455,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     274,   456,     0,   457,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   458,     0,   459,   460,   461,   462,   463,     0,   344,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   464,   465,     0,     0,     0,     0,
       0,     0,   466,   346,   125,   126,   127,   128,   129,   130,
     131,   132,     0,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   125,   126,   127,   128,   129,
     130,   131,   132,     0,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   125,   126,   127,   128,
     129,   130,   131,   132,     0,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,     0,     0,     0,
       0,     0,   124,     0,     0,   468,     0,     0,     0,   125,
     126,   127,   128,   129,   130,   131,   132,   343,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
       0,     0,     0,     0,     0,     0,     0,   145,   402,   125,
     126,   127,   128,   129,   130,   131,   132,   469,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
       0,     0,     0,     0,     0,   295,   125,   126,   127,   128,
     129,   130,   131,   132,     0,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   126,   127,   128,
     129,   130,   131,   132,     0,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   127,   128,   129,
     130,   131,   132,     0,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,  -220,  -220,  -220,  -220,
     132,     0,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144
};

static const yytype_int16 yycheck[] =
{
      25,   178,    20,    20,     3,     3,     3,     3,   102,     3,
     315,     3,    88,    68,   125,   163,   381,   382,   102,   369,
       6,     3,     4,     5,     6,     7,     8,   308,     6,   112,
     154,    17,    57,    58,    59,    17,    18,    62,    63,     3,
     187,   187,    91,    25,    93,     3,    38,   184,   184,   154,
     248,    33,    91,     9,    93,    37,   119,   120,    83,    84,
     112,    43,   427,   114,    20,   430,   431,   173,    50,   434,
     236,   130,   187,    13,   125,    15,    16,   100,   112,   384,
      38,    63,    64,    65,   112,   110,   252,     8,   153,   112,
     115,   174,   229,   229,   119,     0,   121,   122,   123,   247,
     125,   126,   127,   250,   250,   130,   131,   111,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     179,     4,   174,   148,     7,   231,   181,   204,   252,     3,
       4,     5,     6,     7,     8,   241,   417,   252,   102,   250,
     174,   491,   205,    17,    18,   170,   174,   252,   112,   252,
     205,    25,    26,   234,   260,   221,    61,   233,   252,    33,
     225,   248,   187,   311,   189,   151,   314,   250,   252,    43,
     242,   252,   197,   151,   240,    80,    50,   141,     3,     4,
       5,     6,     7,     8,   233,   184,   234,   212,   213,    63,
      64,    65,    17,    18,   233,   500,   225,   249,   250,    19,
      25,   224,   166,   225,   252,    17,   249,   250,   190,   272,
      84,    85,   234,   118,   248,    79,     3,    37,    43,   584,
     248,   251,   252,   252,   103,    50,     9,   249,    40,   292,
     252,   249,   249,   107,     3,   114,    62,   249,    63,    64,
      65,     3,   607,   107,    56,    52,   125,    54,   112,   274,
     275,   250,   250,   250,   250,   280,   250,   249,   122,     3,
     242,   243,   244,   245,   246,   247,    78,     3,   250,   174,
     295,     3,     4,     5,     6,     7,     8,   141,   250,   184,
     305,   250,   187,   346,   163,    17,    18,   312,    79,   115,
     250,    89,    38,    25,   251,   252,   473,   250,   124,   324,
     325,   454,   250,   328,   130,   458,   104,   251,   252,   334,
     463,    43,   250,   125,    46,     3,   107,   222,    50,   344,
      26,   112,   347,   149,   198,   199,   200,   251,   252,   203,
       3,    63,    64,    65,    26,    27,    28,    29,    30,   151,
       3,     4,     5,     6,     7,     8,     3,   372,   184,   147,
     141,   163,   250,   179,    17,    18,   251,   252,     3,   518,
       3,   520,    25,    26,   251,   524,     3,   526,   242,   243,
     244,   245,   246,   247,   172,   268,   269,   203,   271,   404,
      43,     4,     5,     6,     7,   251,   252,    50,   251,   252,
     415,   416,   251,   252,   251,   252,   128,   422,   423,   124,
      63,    64,    65,   251,   252,   251,   252,   219,   233,   160,
       3,     4,     5,     6,     7,     8,     3,   242,   243,   244,
     245,   246,   247,   158,    17,    18,     3,     4,     5,     6,
       7,     8,    25,   251,   252,   594,    61,   596,   251,   598,
      17,    18,   335,   251,   252,   338,   471,   472,    25,   474,
      43,   476,   477,   243,   244,    80,     3,    50,    23,    24,
      25,    26,    27,    28,    29,    30,    43,   251,   252,     3,
      63,    64,    65,    50,   251,   252,     3,     4,     5,     6,
       7,     8,   250,   215,   251,   252,    63,    64,    65,   250,
      17,    18,   251,   118,   251,   252,   251,   252,    25,   251,
     252,    78,   251,     3,     4,     5,     6,     7,     8,   251,
     242,   243,   244,   245,   246,   247,    43,    17,    18,   420,
     421,   546,   251,    50,   250,    25,     3,     4,     5,     6,
       7,     8,   303,   304,   250,    30,    63,    64,    65,   125,
      17,    18,   125,    43,   125,   124,   153,     3,    25,   174,
      50,    78,   124,     3,     4,     5,     6,     7,     8,   184,
      47,   131,   187,    63,    64,    65,    43,    17,    18,    20,
     250,   121,   154,    50,   251,    25,   251,   251,    78,   242,
     243,   244,   245,   246,   247,   105,    63,    64,    65,    99,
       3,   184,     3,    43,   250,   250,   125,   222,     3,   125,
      50,    78,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    63,    64,    65,    10,    11,    12,    13,
      14,    15,    16,    17,     3,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,   242,
     243,   244,   245,   246,   247,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,   242,   243,   244,   245,   246,
     247,    10,    11,    12,    13,    14,    15,    16,    17,     3,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,   511,   512,   251,   514,   515,   516,   251,   251,
     519,    47,   521,   251,   523,   251,   525,   251,   102,   251,
     106,   250,   124,   250,   250,   242,   243,   244,   245,   246,
     247,    10,    11,    12,    13,    14,    15,    16,    17,    20,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,   242,   243,   244,   245,   246,   247,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    24,    25,    26,
      27,    28,    29,    30,   250,   242,   243,   244,   245,   246,
     247,    10,    11,    12,    13,    14,    15,    16,    17,   250,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,   242,   243,   244,   245,   246,   247,    10,    11,
      12,    13,    14,    15,    16,    17,   250,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,    17,   250,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      20,   222,   252,   250,     3,   251,     3,   250,   250,    43,
      10,    11,    12,    13,    14,    15,    16,    17,   252,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,    17,   250,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    89,   250,   250,   438,   439,    20,   441,     5,
       4,   444,   445,     5,   447,   448,   449,     5,    99,   252,
     453,   180,   455,   252,   457,   122,     3,   251,   251,   462,
     151,   118,     4,   125,    10,    11,    12,    13,    14,    15,
      16,    17,     5,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,   187,     4,     4,   252,   251,
       4,   116,     8,   285,   415,    10,    11,    12,    13,    14,
      15,    16,    17,   252,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,   530,   148,   157,   256,
     177,   376,   179,   301,   174,    24,    72,    73,    74,    75,
      13,    14,    15,    16,    17,    39,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,   205,   270,
     107,   477,   377,   252,   522,   385,    85,    -1,    -1,    -1,
      -1,   218,   108,   109,   110,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,    17,
     252,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     251,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    42,    43,    44,    45,
      -1,   251,    -1,    -1,    -1,   292,    52,    -1,    -1,   296,
     297,   298,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   251,    -1,    70,    71,    -1,    -1,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    -1,   323,    -1,    -1,    -1,
      -1,    87,    -1,    -1,    -1,    -1,    -1,    -1,    94,    -1,
      -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   238,   239,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   119,   120,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   233,    -1,
      -1,    -1,   138,   139,    -1,    -1,    -1,   143,   144,   145,
      -1,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,   169,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     208,   187,    -1,   189,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   207,    -1,   209,   210,   211,   212,   213,    -1,   208,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   230,   231,    -1,    -1,    -1,    -1,
      -1,    -1,   238,   102,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,     3,    -1,    -1,    39,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,    17,    93,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    93,    10,
      11,    12,    13,    14,    15,    16,    17,    81,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    -1,    36,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    61,    80,   118,   174,   184,   187,   222,   254,   261,
     262,   292,   296,   304,   305,   308,   310,   324,    68,   181,
     205,   311,   293,   298,   298,   273,     8,   325,   326,   298,
     306,     0,   261,   248,   111,   309,   309,   204,     3,   102,
     112,   141,   166,   294,    79,   107,   112,   122,   141,   299,
     299,     3,     4,     5,     6,     7,     8,    17,    18,    25,
      26,    33,    43,    50,    63,    64,    65,    84,    85,   107,
     198,   199,   200,   203,   242,   243,   244,   245,   246,   247,
     255,   274,   275,     9,    20,   252,   112,   141,     3,   250,
     277,   278,   279,   281,   291,   248,   242,     3,     3,   309,
     249,   295,     3,   294,   102,   252,     3,     3,   249,   250,
       9,   255,   255,   255,   255,   233,   255,   260,   250,   250,
     250,   250,   250,   250,     3,    10,    11,    12,    13,    14,
      15,    16,    17,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    38,   276,   102,   252,   255,
     255,   326,   249,   276,   262,   277,   187,   252,    62,   115,
     130,   149,   179,   203,   282,   284,    38,   280,     3,    26,
     234,   263,   225,   277,     3,   187,   250,   300,   187,   300,
       3,   255,   256,   257,   255,   255,   260,    91,    93,   233,
     262,   255,   256,    46,   128,   215,   256,   258,   255,   255,
      26,   255,   255,   255,   255,   250,     6,    17,   151,   255,
     255,    13,    15,    16,   255,    33,    37,   190,   250,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
       3,   277,   275,     3,   100,   112,   224,   288,   251,   251,
       3,   307,   278,   130,   179,   285,   279,   124,   160,   283,
       3,   112,   174,   249,   250,   322,   323,   255,   158,   269,
     277,   263,   295,     3,   303,     3,   272,   229,   262,   303,
     229,   262,   252,   251,   208,    91,    93,   255,   255,   251,
     102,   251,   251,   255,   252,   252,   251,   251,   256,   262,
       6,   151,   250,   255,   255,    36,   250,   250,   250,   262,
     263,   276,   125,   125,   125,    20,   249,   252,   263,   283,
     283,   124,   153,   279,   124,     3,   103,   114,   125,   163,
     312,   313,   314,   280,    47,   131,   270,   263,    20,   154,
     252,   297,   251,   252,   250,   301,   297,   297,   301,   297,
     256,   255,   255,    93,   208,   255,   102,   121,   259,   259,
     251,   251,   256,   262,   255,   262,   262,   262,   251,   105,
     264,   288,    99,   289,   289,   289,   255,     3,     3,   269,
     279,   255,   153,   225,   286,   287,   279,   250,   322,   114,
     125,   250,   250,   125,   251,   252,     3,   262,   255,   265,
     255,    78,   255,   125,     3,     3,    78,   255,   302,   252,
     297,   297,    93,   255,    99,   251,   256,   255,   251,   251,
     251,   251,   251,   251,   251,    47,   106,   268,   124,   250,
     250,   250,    20,    20,   249,   270,   255,   250,   287,   312,
     250,   250,   272,   272,   250,   322,   313,    42,    43,    44,
      45,    52,    70,    71,    76,    87,    94,    98,   119,   120,
     138,   139,   143,   144,   145,   169,   187,   189,   207,   209,
     210,   211,   212,   213,   230,   231,   238,   320,    39,    81,
     266,   252,   252,   222,    20,   251,   252,   250,   255,   251,
      72,    73,    74,    75,   108,   109,   110,   238,   239,   265,
     255,   269,     3,   290,   290,   290,   255,   255,     3,   272,
     251,   272,   272,   251,   251,   272,   250,   316,   316,   316,
     316,   316,   316,   250,   316,   316,   316,    43,   317,   316,
     317,   316,   250,   316,   317,   316,   317,   250,   250,   315,
     255,   255,   303,    78,   255,    78,   255,   302,   251,   236,
     267,   270,   251,   252,   251,   251,    20,   251,   322,   251,
     251,   251,     5,   318,   319,   318,   318,     4,   321,   318,
     318,   318,   319,   318,   319,   318,   321,   318,   319,   318,
     319,     5,     5,    17,    40,    56,    78,   125,   151,   163,
     219,   266,   251,   180,   122,   271,     3,   255,   251,   252,
     221,   240,    52,    54,   251,   252,   251,   251,   251,   151,
       4,     4,     5,     6,     7,   125,   125,   250,   272,     5,
     187,     4,   319,     4,   319,   319,   272,   251,     4,   251
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   253,   254,   254,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   256,   256,
     257,   257,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   258,   258,   258,   255,   255,
     259,   259,   259,   259,   259,   259,   259,   259,   259,   255,
     255,   255,   255,   260,   260,   255,   255,   255,   255,   255,
     255,   255,   255,   261,   262,   262,   263,   263,   264,   264,
     265,   265,   266,   266,   266,   267,   267,   268,   268,   269,
     269,   270,   270,   270,   271,   271,   272,   272,   273,   273,
     273,   273,   273,   273,   273,   273,   273,   274,   274,   274,
     275,   276,   276,   276,   277,   277,   278,   278,   279,   279,
     279,   279,   280,   280,   281,   281,   281,   281,   281,   282,
     282,   282,   283,   283,   284,   284,   285,   285,   285,   286,
     286,   287,   287,   288,   288,   288,   288,   289,   289,   290,
     290,   291,   261,   292,   293,   293,   293,   293,   292,   294,
     294,   295,   295,   292,   261,   296,   297,   297,   298,   298,
     298,   298,   298,   299,   299,   300,   300,   301,   301,   302,
     302,   302,   302,   296,   303,   303,   303,   303,   296,   261,
     304,   304,   304,   261,   305,   306,   306,   306,   307,   307,
     307,   307,   261,   308,   308,   309,   309,   261,   310,   310,
     310,   310,   310,   310,   311,   311,   312,   312,   313,   313,
     313,   313,   313,   314,   313,   315,   315,   315,   315,   315,
     315,   315,   315,   315,   315,   315,   315,   315,   316,   316,
     316,   317,   317,   318,   318,   318,   319,   319,   319,   320,
     320,   320,   320,   320,   320,   320,   320,   320,   320,   320,
     320,   320,   320,   320,   320,   320,   320,   320,   320,   320,
     320,   320,   320,   320,   320,   320,   320,   320,   320,   321,
     321,   322,   323,   323,   323,   261,   324,   325,   325,   326,
     326
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     3,     1,     3,     1,     1,     1,     1,
       1,     3,     3,     3,     3,     3,     3,     2,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     3,     5,     6,
       6,     6,     3,     4,     3,     4,     3,     5,     1,     3,
       0,     1,     5,     6,     5,     6,     4,     4,     4,     4,
       4,     6,     8,     4,     7,     1,     1,     1,     6,     6,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     4,
       6,     3,     5,     4,     5,     3,     4,     3,     4,     1,
       1,     1,     2,     1,     3,    11,     0,     2,     0,     4,
       2,     4,     0,     1,     1,     0,     2,     0,     2,     0,
       3,     0,     2,     4,     0,     2,     1,     3,     0,     2,
       2,     2,     2,     2,     2,     2,     2,     1,     3,     1,
       2,     2,     1,     0,     1,     3,     1,     1,     3,     5,
       3,     3,     1,     0,     5,     3,     5,     6,     5,     0,
       1,     1,     0,     1,     1,     1,     2,     2,     0,     0,
       1,     2,     4,     6,     6,     6,     0,     2,     0,     1,
       3,     3,     1,     7,     2,     2,     2,     0,     6,     2,
       4,     0,     2,     7,     1,     8,     0,     4,     0,     2,
       2,     2,     2,     1,     0,     0,     3,     3,     5,     1,
       1,     3,     3,     7,     3,     3,     5,     5,     7,     1,
       8,     7,     7,     1,     8,     0,     2,     2,     3,     5,
       5,     7,     1,     4,     4,     0,     2,     1,     8,    10,
       9,     6,    11,     8,     0,     1,     1,     3,     5,     4,
       4,     5,     5,     0,     4,     0,     3,     2,     3,     3,
       3,     3,     2,     5,     3,     3,     2,     3,     0,     3,
       5,     0,     1,     0,     2,     2,     0,     4,     3,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       1,     1,     1,     1,     1,     3,     5,     2,     4,     1,
       1,     1,     1,     3,     3,     3,     3,     5,     5,     1,
       3,     3,     0,     1,     1,     1,     2,     1,     3,     3,
       3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 4:
#line 293 "pmysql.y" /* yacc.c:1646  */
    { emit("NAME %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2132 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 294 "pmysql.y" /* yacc.c:1646  */
    { emit("FIELDNAME %s.%s", (yyvsp[-2].strval), (yyvsp[0].strval)); free((yyvsp[-2].strval)); free((yyvsp[0].strval)); }
#line 2138 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 295 "pmysql.y" /* yacc.c:1646  */
    { emit("USERVAR %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2144 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 296 "pmysql.y" /* yacc.c:1646  */
    { emit("STRING %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2150 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 297 "pmysql.y" /* yacc.c:1646  */
    { emit("NUMBER %d", (yyvsp[0].intval)); }
#line 2156 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 298 "pmysql.y" /* yacc.c:1646  */
    { emit("FLOAT %g", (yyvsp[0].floatval)); }
#line 2162 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 299 "pmysql.y" /* yacc.c:1646  */
    { emit("BOOL %d", (yyvsp[0].intval)); }
#line 2168 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 302 "pmysql.y" /* yacc.c:1646  */
    { emit("ADD"); }
#line 2174 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 303 "pmysql.y" /* yacc.c:1646  */
    { emit("SUB"); }
#line 2180 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 304 "pmysql.y" /* yacc.c:1646  */
    { emit("MUL"); }
#line 2186 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 305 "pmysql.y" /* yacc.c:1646  */
    { emit("DIV"); }
#line 2192 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 306 "pmysql.y" /* yacc.c:1646  */
    { emit("MOD"); }
#line 2198 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 307 "pmysql.y" /* yacc.c:1646  */
    { emit("MOD"); }
#line 2204 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 308 "pmysql.y" /* yacc.c:1646  */
    { emit("NEG"); }
#line 2210 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 309 "pmysql.y" /* yacc.c:1646  */
    { emit("AND"); }
#line 2216 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 310 "pmysql.y" /* yacc.c:1646  */
    { emit("OR"); }
#line 2222 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 311 "pmysql.y" /* yacc.c:1646  */
    { emit("XOR"); }
#line 2228 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 312 "pmysql.y" /* yacc.c:1646  */
    { emit("BITOR"); }
#line 2234 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 313 "pmysql.y" /* yacc.c:1646  */
    { emit("BITAND"); }
#line 2240 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 314 "pmysql.y" /* yacc.c:1646  */
    { emit("BITXOR"); }
#line 2246 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 315 "pmysql.y" /* yacc.c:1646  */
    { emit("SHIFT %s", (yyvsp[-1].subtok)==1?"left":"right"); }
#line 2252 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 316 "pmysql.y" /* yacc.c:1646  */
    { emit("NOT"); }
#line 2258 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 317 "pmysql.y" /* yacc.c:1646  */
    { emit("NOT"); }
#line 2264 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 318 "pmysql.y" /* yacc.c:1646  */
    { emit("CMP %d", (yyvsp[-1].subtok)); }
#line 2270 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 321 "pmysql.y" /* yacc.c:1646  */
    { emit("CMPSELECT %d", (yyvsp[-3].subtok)); }
#line 2276 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 322 "pmysql.y" /* yacc.c:1646  */
    { emit("CMPANYSELECT %d", (yyvsp[-4].subtok)); }
#line 2282 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 323 "pmysql.y" /* yacc.c:1646  */
    { emit("CMPANYSELECT %d", (yyvsp[-4].subtok)); }
#line 2288 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 324 "pmysql.y" /* yacc.c:1646  */
    { emit("CMPALLSELECT %d", (yyvsp[-4].subtok)); }
#line 2294 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 327 "pmysql.y" /* yacc.c:1646  */
    { emit("ISNULL"); }
#line 2300 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 328 "pmysql.y" /* yacc.c:1646  */
    { emit("ISNULL"); emit("NOT"); }
#line 2306 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 329 "pmysql.y" /* yacc.c:1646  */
    { emit("ISBOOL %d", (yyvsp[0].intval)); }
#line 2312 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 330 "pmysql.y" /* yacc.c:1646  */
    { emit("ISBOOL %d", (yyvsp[0].intval)); emit("NOT"); }
#line 2318 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 332 "pmysql.y" /* yacc.c:1646  */
    { emit("ASSIGN @%s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); }
#line 2324 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 335 "pmysql.y" /* yacc.c:1646  */
    { emit("BETWEEN"); }
#line 2330 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 338 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 1; }
#line 2336 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 339 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 1 + (yyvsp[0].intval); }
#line 2342 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 342 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 2348 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 346 "pmysql.y" /* yacc.c:1646  */
    { emit("ISIN %d", (yyvsp[-1].intval)); }
#line 2354 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 347 "pmysql.y" /* yacc.c:1646  */
    { emit("ISIN %d", (yyvsp[-1].intval)); emit("NOT"); }
#line 2360 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 348 "pmysql.y" /* yacc.c:1646  */
    { emit("CMPANYSELECT 4"); }
#line 2366 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 349 "pmysql.y" /* yacc.c:1646  */
    { emit("CMPALLSELECT 3"); }
#line 2372 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 350 "pmysql.y" /* yacc.c:1646  */
    { emit("EXISTSSELECT"); if((yyvsp[-3].subtok))emit("NOT"); }
#line 2378 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 354 "pmysql.y" /* yacc.c:1646  */
    {  emit("CALL %d %s", (yyvsp[-1].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 2384 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 358 "pmysql.y" /* yacc.c:1646  */
    { emit("COUNTALL"); }
#line 2390 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 359 "pmysql.y" /* yacc.c:1646  */
    { emit(" CALL 1 COUNT"); }
#line 2396 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 361 "pmysql.y" /* yacc.c:1646  */
    {  emit("CALL %d SUBSTR", (yyvsp[-1].intval)); }
#line 2402 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 362 "pmysql.y" /* yacc.c:1646  */
    {  emit("CALL 2 SUBSTR"); }
#line 2408 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 363 "pmysql.y" /* yacc.c:1646  */
    {  emit("CALL 3 SUBSTR"); }
#line 2414 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 365 "pmysql.y" /* yacc.c:1646  */
    { emit("CALL %d TRIM", (yyvsp[-1].intval)); }
#line 2420 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 366 "pmysql.y" /* yacc.c:1646  */
    { emit("CALL 3 TRIM"); }
#line 2426 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 369 "pmysql.y" /* yacc.c:1646  */
    { emit("NUMBER 1"); }
#line 2432 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 370 "pmysql.y" /* yacc.c:1646  */
    { emit("NUMBER 2"); }
#line 2438 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 371 "pmysql.y" /* yacc.c:1646  */
    { emit("NUMBER 3"); }
#line 2444 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 374 "pmysql.y" /* yacc.c:1646  */
    { emit("CALL 3 DATE_ADD"); }
#line 2450 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 375 "pmysql.y" /* yacc.c:1646  */
    { emit("CALL 3 DATE_SUB"); }
#line 2456 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 378 "pmysql.y" /* yacc.c:1646  */
    { emit("NUMBER 1"); }
#line 2462 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 379 "pmysql.y" /* yacc.c:1646  */
    { emit("NUMBER 2"); }
#line 2468 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 380 "pmysql.y" /* yacc.c:1646  */
    { emit("NUMBER 3"); }
#line 2474 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 381 "pmysql.y" /* yacc.c:1646  */
    { emit("NUMBER 4"); }
#line 2480 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 382 "pmysql.y" /* yacc.c:1646  */
    { emit("NUMBER 5"); }
#line 2486 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 383 "pmysql.y" /* yacc.c:1646  */
    { emit("NUMBER 6"); }
#line 2492 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 384 "pmysql.y" /* yacc.c:1646  */
    { emit("NUMBER 7"); }
#line 2498 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 385 "pmysql.y" /* yacc.c:1646  */
    { emit("NUMBER 8"); }
#line 2504 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 386 "pmysql.y" /* yacc.c:1646  */
    { emit("NUMBER 9"); }
#line 2510 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 388 "pmysql.y" /* yacc.c:1646  */
    { emit("CASEVAL %d 0", (yyvsp[-1].intval)); }
#line 2516 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 389 "pmysql.y" /* yacc.c:1646  */
    { emit("CASEVAL %d 1", (yyvsp[-3].intval)); }
#line 2522 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 390 "pmysql.y" /* yacc.c:1646  */
    { emit("CASE %d 0", (yyvsp[-1].intval)); }
#line 2528 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 391 "pmysql.y" /* yacc.c:1646  */
    { emit("CASE %d 1", (yyvsp[-3].intval)); }
#line 2534 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 394 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 1; }
#line 2540 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 395 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-4].intval)+1; }
#line 2546 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 398 "pmysql.y" /* yacc.c:1646  */
    { emit("LIKE"); }
#line 2552 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 399 "pmysql.y" /* yacc.c:1646  */
    { emit("LIKE"); emit("NOT"); }
#line 2558 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 402 "pmysql.y" /* yacc.c:1646  */
    { emit("REGEXP"); }
#line 2564 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 403 "pmysql.y" /* yacc.c:1646  */
    { emit("REGEXP"); emit("NOT"); }
#line 2570 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 406 "pmysql.y" /* yacc.c:1646  */
    { emit("NOW"); }
#line 2576 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 407 "pmysql.y" /* yacc.c:1646  */
    { emit("NOW"); }
#line 2582 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 408 "pmysql.y" /* yacc.c:1646  */
    { emit("NOW"); }
#line 2588 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 411 "pmysql.y" /* yacc.c:1646  */
    { emit("STRTOBIN"); }
#line 2594 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 416 "pmysql.y" /* yacc.c:1646  */
    { emit("STMT"); }
#line 2600 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 420 "pmysql.y" /* yacc.c:1646  */
    { emit("SELECTNODATA %d %d", (yyvsp[-1].intval), (yyvsp[0].intval)); }
#line 2606 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 425 "pmysql.y" /* yacc.c:1646  */
    { emit("SELECT %d %d %d", (yyvsp[-9].intval), (yyvsp[-8].intval), (yyvsp[-6].intval)); }
#line 2612 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 429 "pmysql.y" /* yacc.c:1646  */
    { emit("WHERE"); }
#line 2618 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 433 "pmysql.y" /* yacc.c:1646  */
    { emit("GROUPBYLIST %d %d", (yyvsp[-1].intval), (yyvsp[0].intval)); }
#line 2624 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 437 "pmysql.y" /* yacc.c:1646  */
    { emit("GROUPBY %d",  (yyvsp[0].intval)); (yyval.intval) = 1; }
#line 2630 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 439 "pmysql.y" /* yacc.c:1646  */
    { emit("GROUPBY %d",  (yyvsp[0].intval)); (yyval.intval) = (yyvsp[-3].intval) + 1; }
#line 2636 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 442 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 2642 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 443 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 2648 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 444 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 1; }
#line 2654 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 447 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 2660 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 448 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 1; }
#line 2666 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 452 "pmysql.y" /* yacc.c:1646  */
    { emit("HAVING"); }
#line 2672 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 455 "pmysql.y" /* yacc.c:1646  */
    { emit("ORDERBY %d", (yyvsp[0].intval)); }
#line 2678 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 458 "pmysql.y" /* yacc.c:1646  */
    { emit("LIMIT 1"); }
#line 2684 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 459 "pmysql.y" /* yacc.c:1646  */
    { emit("LIMIT 2"); }
#line 2690 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 463 "pmysql.y" /* yacc.c:1646  */
    { emit("INTO %d", (yyvsp[0].intval)); }
#line 2696 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 466 "pmysql.y" /* yacc.c:1646  */
    { emit("COLUMN %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = 1; }
#line 2702 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 467 "pmysql.y" /* yacc.c:1646  */
    { emit("COLUMN %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2708 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 470 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 2714 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 472 "pmysql.y" /* yacc.c:1646  */
    { if((yyvsp[-1].intval) & 01) yyerror("duplicate ALL option"); (yyval.intval) = (yyvsp[-1].intval) | 01; }
#line 2720 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 474 "pmysql.y" /* yacc.c:1646  */
    { if((yyvsp[-1].intval) & 02) yyerror("duplicate DISTINCT option"); (yyval.intval) = (yyvsp[-1].intval) | 02; }
#line 2726 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 476 "pmysql.y" /* yacc.c:1646  */
    { if((yyvsp[-1].intval) & 04) yyerror("duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[-1].intval) | 04; }
#line 2732 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 478 "pmysql.y" /* yacc.c:1646  */
    { if((yyvsp[-1].intval) & 010) yyerror("duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[-1].intval) | 010; }
#line 2738 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 480 "pmysql.y" /* yacc.c:1646  */
    { if((yyvsp[-1].intval) & 020) yyerror("duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[-1].intval) | 020; }
#line 2744 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 482 "pmysql.y" /* yacc.c:1646  */
    { if((yyvsp[-1].intval) & 040) yyerror("duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[-1].intval) | 040; }
#line 2750 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 484 "pmysql.y" /* yacc.c:1646  */
    { if((yyvsp[-1].intval) & 0100) yyerror("duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[-1].intval) | 0100; }
#line 2756 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 486 "pmysql.y" /* yacc.c:1646  */
    { if((yyvsp[-1].intval) & 0200) yyerror("duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = 
   (yyvsp[-1].intval) | 0200; }
#line 2763 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 490 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 1; }
#line 2769 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 491 "pmysql.y" /* yacc.c:1646  */
    {(yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2775 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 492 "pmysql.y" /* yacc.c:1646  */
    { emit("SELECTALL"); (yyval.intval) = 1; }
#line 2781 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 497 "pmysql.y" /* yacc.c:1646  */
    { emit ("ALIAS %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2787 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 498 "pmysql.y" /* yacc.c:1646  */
    { emit ("ALIAS %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2793 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 502 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 1; }
#line 2799 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 503 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2805 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 511 "pmysql.y" /* yacc.c:1646  */
    { emit("TABLE %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); }
#line 2811 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 512 "pmysql.y" /* yacc.c:1646  */
    { emit("TABLE %s.%s", (yyvsp[-4].strval), (yyvsp[-2].strval));
                               free((yyvsp[-4].strval)); free((yyvsp[-2].strval)); }
#line 2818 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 514 "pmysql.y" /* yacc.c:1646  */
    { emit("SUBQUERYAS %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2824 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 515 "pmysql.y" /* yacc.c:1646  */
    { emit("TABLEREFERENCES %d", (yyvsp[-1].intval)); }
#line 2830 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 524 "pmysql.y" /* yacc.c:1646  */
    { emit("JOIN %d", 100+(yyvsp[-3].intval)); }
#line 2836 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 526 "pmysql.y" /* yacc.c:1646  */
    { emit("JOIN %d", 200); }
#line 2842 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 528 "pmysql.y" /* yacc.c:1646  */
    { emit("JOIN %d", 200); }
#line 2848 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 530 "pmysql.y" /* yacc.c:1646  */
    { emit("JOIN %d", 300+(yyvsp[-4].intval)+(yyvsp[-3].intval)); }
#line 2854 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 532 "pmysql.y" /* yacc.c:1646  */
    { emit("JOIN %d", 400+(yyvsp[-2].intval)); }
#line 2860 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 535 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 2866 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 536 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 1; }
#line 2872 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 537 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 2; }
#line 2878 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 540 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 2884 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 541 "pmysql.y" /* yacc.c:1646  */
    {(yyval.intval) = 4; }
#line 2890 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 544 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 1; }
#line 2896 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 545 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 2; }
#line 2902 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 548 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 1 + (yyvsp[0].intval); }
#line 2908 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 549 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 2 + (yyvsp[0].intval); }
#line 2914 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 550 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 2920 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 557 "pmysql.y" /* yacc.c:1646  */
    { emit("ONEXPR"); }
#line 2926 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 558 "pmysql.y" /* yacc.c:1646  */
    { emit("USING %d", (yyvsp[-1].intval)); }
#line 2932 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 563 "pmysql.y" /* yacc.c:1646  */
    { emit("INDEXHINT %d %d", (yyvsp[-1].intval), 10+(yyvsp[-3].intval)); }
#line 2938 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 565 "pmysql.y" /* yacc.c:1646  */
    { emit("INDEXHINT %d %d", (yyvsp[-1].intval), 20+(yyvsp[-3].intval)); }
#line 2944 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 567 "pmysql.y" /* yacc.c:1646  */
    { emit("INDEXHINT %d %d", (yyvsp[-1].intval), 30+(yyvsp[-3].intval)); }
#line 2950 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 571 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 1; }
#line 2956 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 572 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 2962 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 575 "pmysql.y" /* yacc.c:1646  */
    { emit("INDEX %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = 1; }
#line 2968 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 576 "pmysql.y" /* yacc.c:1646  */
    { emit("INDEX %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2974 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 579 "pmysql.y" /* yacc.c:1646  */
    { emit("SUBQUERY"); }
#line 2980 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 584 "pmysql.y" /* yacc.c:1646  */
    { emit("STMT"); }
#line 2986 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 590 "pmysql.y" /* yacc.c:1646  */
    { emit("DELETEONE %d %s", (yyvsp[-5].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 2992 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 593 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-1].intval) + 01; }
#line 2998 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 594 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-1].intval) + 02; }
#line 3004 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 595 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-1].intval) + 04; }
#line 3010 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 596 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 3016 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 603 "pmysql.y" /* yacc.c:1646  */
    { emit("DELETEMULTI %d %d %d", (yyvsp[-4].intval), (yyvsp[-3].intval), (yyvsp[-1].intval)); }
#line 3022 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 605 "pmysql.y" /* yacc.c:1646  */
    { emit("TABLE %s", (yyvsp[-1].strval)); free((yyvsp[-1].strval)); (yyval.intval) = 1; }
#line 3028 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 607 "pmysql.y" /* yacc.c:1646  */
    { emit("TABLE %s", (yyvsp[-1].strval)); free((yyvsp[-1].strval)); (yyval.intval) = (yyvsp[-3].intval) + 1; }
#line 3034 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 616 "pmysql.y" /* yacc.c:1646  */
    { emit("DELETEMULTI %d %d %d", (yyvsp[-5].intval), (yyvsp[-3].intval), (yyvsp[-1].intval)); }
#line 3040 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 621 "pmysql.y" /* yacc.c:1646  */
    { emit("STMT"); }
#line 3046 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 627 "pmysql.y" /* yacc.c:1646  */
    { emit("INSERTVALS %d %d %s", (yyvsp[-6].intval), (yyvsp[-1].intval), (yyvsp[-4].strval)); free((yyvsp[-4].strval)); }
#line 3052 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 631 "pmysql.y" /* yacc.c:1646  */
    { emit("DUPUPDATE %d", (yyvsp[0].intval)); }
#line 3058 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 634 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 3064 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 635 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-1].intval) | 01 ; }
#line 3070 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 636 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-1].intval) | 02 ; }
#line 3076 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 637 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-1].intval) | 04 ; }
#line 3082 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 638 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-1].intval) | 010 ; }
#line 3088 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 645 "pmysql.y" /* yacc.c:1646  */
    { emit("INSERTCOLS %d", (yyvsp[-1].intval)); }
#line 3094 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 648 "pmysql.y" /* yacc.c:1646  */
    { emit("VALUES %d", (yyvsp[-1].intval)); (yyval.intval) = 1; }
#line 3100 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 649 "pmysql.y" /* yacc.c:1646  */
    { emit("VALUES %d", (yyvsp[-1].intval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 3106 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 652 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 1; }
#line 3112 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 653 "pmysql.y" /* yacc.c:1646  */
    { emit("DEFAULT"); (yyval.intval) = 1; }
#line 3118 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 654 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3124 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 655 "pmysql.y" /* yacc.c:1646  */
    { emit("DEFAULT"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3130 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 660 "pmysql.y" /* yacc.c:1646  */
    { emit("INSERTASGN %d %d %s", (yyvsp[-5].intval), (yyvsp[-1].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 3136 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 665 "pmysql.y" /* yacc.c:1646  */
    { if ((yyvsp[-1].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[-2].strval)); YYERROR; }
       emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = 1; }
#line 3143 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 668 "pmysql.y" /* yacc.c:1646  */
    { if ((yyvsp[-1].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[-2].strval)); YYERROR; }
                 emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = 1; }
#line 3150 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 671 "pmysql.y" /* yacc.c:1646  */
    { if ((yyvsp[-1].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[-4].intval)); YYERROR; }
                 emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 3157 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 674 "pmysql.y" /* yacc.c:1646  */
    { if ((yyvsp[-1].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[-4].intval)); YYERROR; }
                 emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 3164 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 680 "pmysql.y" /* yacc.c:1646  */
    { emit("INSERTSELECT %d %s", (yyvsp[-5].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 3170 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 684 "pmysql.y" /* yacc.c:1646  */
    { emit("STMT"); }
#line 3176 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 690 "pmysql.y" /* yacc.c:1646  */
    { emit("REPLACEVALS %d %d %s", (yyvsp[-6].intval), (yyvsp[-1].intval), (yyvsp[-4].strval)); free((yyvsp[-4].strval)); }
#line 3182 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 696 "pmysql.y" /* yacc.c:1646  */
    { emit("REPLACEASGN %d %d %s", (yyvsp[-5].intval), (yyvsp[-1].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 3188 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 701 "pmysql.y" /* yacc.c:1646  */
    { emit("REPLACESELECT %d %s", (yyvsp[-5].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 3194 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 705 "pmysql.y" /* yacc.c:1646  */
    { emit("STMT"); }
#line 3200 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 712 "pmysql.y" /* yacc.c:1646  */
    { emit("UPDATE %d %d %d", (yyvsp[-6].intval), (yyvsp[-5].intval), (yyvsp[-3].intval)); }
#line 3206 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 715 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 3212 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 716 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-1].intval) | 01 ; }
#line 3218 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 717 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-1].intval) | 010 ; }
#line 3224 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 722 "pmysql.y" /* yacc.c:1646  */
    { if ((yyvsp[-1].subtok) != 4) { yyerror("bad update assignment to %s", (yyvsp[-2].strval)); YYERROR; }
	 emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = 1; }
#line 3231 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 725 "pmysql.y" /* yacc.c:1646  */
    { if ((yyvsp[-1].subtok) != 4) { yyerror("bad update assignment to %s", (yyvsp[-4].strval)); YYERROR; }
	 emit("ASSIGN %s.%s", (yyvsp[-4].strval), (yyvsp[-2].strval)); free((yyvsp[-4].strval)); free((yyvsp[-2].strval)); (yyval.intval) = 1; }
#line 3238 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 728 "pmysql.y" /* yacc.c:1646  */
    { if ((yyvsp[-1].subtok) != 4) { yyerror("bad update assignment to %s", (yyvsp[-2].strval)); YYERROR; }
	 emit("ASSIGN %s.%s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 3245 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 731 "pmysql.y" /* yacc.c:1646  */
    { if ((yyvsp[-1].subtok) != 4) { yyerror("bad update  assignment to %s.$s", (yyvsp[-4].strval), (yyvsp[-2].strval)); 
          YYERROR; }
         emit("ASSIGN %s.%s", (yyvsp[-4].strval), (yyvsp[-2].strval)); free((yyvsp[-4].strval)); free((yyvsp[-2].strval)); (yyval.intval) = 1; }
#line 3253 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 738 "pmysql.y" /* yacc.c:1646  */
    { emit("STMT"); }
#line 3259 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 743 "pmysql.y" /* yacc.c:1646  */
    { emit("CREATEDATABASE %d %s", (yyvsp[-1].intval), (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 3265 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 745 "pmysql.y" /* yacc.c:1646  */
    { emit("CREATEDATABASE %d %s", (yyvsp[-1].intval), (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 3271 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 748 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 3277 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 750 "pmysql.y" /* yacc.c:1646  */
    { if(!(yyvsp[0].subtok)) { yyerror("IF EXISTS doesn't exist"); YYERROR; }
                        (yyval.intval) = (yyvsp[0].subtok); /* NOT EXISTS hack */ }
#line 3284 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 755 "pmysql.y" /* yacc.c:1646  */
    { emit("STMT"); }
#line 3290 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 759 "pmysql.y" /* yacc.c:1646  */
    { emit("CREATE %d %d %d %s", (yyvsp[-6].intval), (yyvsp[-4].intval), (yyvsp[-1].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 3296 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 763 "pmysql.y" /* yacc.c:1646  */
    { emit("CREATE %d %d %d %s.%s", (yyvsp[-8].intval), (yyvsp[-6].intval), (yyvsp[-1].intval), (yyvsp[-5].strval), (yyvsp[-3].strval));
                          free((yyvsp[-5].strval)); free((yyvsp[-3].strval)); }
#line 3303 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 769 "pmysql.y" /* yacc.c:1646  */
    { emit("CREATESELECT %d %d %d %s", (yyvsp[-7].intval), (yyvsp[-5].intval), (yyvsp[-2].intval), (yyvsp[-4].strval)); free((yyvsp[-4].strval)); }
#line 3309 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 773 "pmysql.y" /* yacc.c:1646  */
    { emit("CREATESELECT %d %d 0 %s", (yyvsp[-4].intval), (yyvsp[-2].intval), (yyvsp[-1].strval)); free((yyvsp[-1].strval)); }
#line 3315 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 778 "pmysql.y" /* yacc.c:1646  */
    { emit("CREATESELECT %d %d 0 %s.%s", (yyvsp[-9].intval), (yyvsp[-7].intval), (yyvsp[-6].strval), (yyvsp[-4].strval));
                              free((yyvsp[-6].strval)); free((yyvsp[-4].strval)); }
#line 3322 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 783 "pmysql.y" /* yacc.c:1646  */
    { emit("CREATESELECT %d %d 0 %s.%s", (yyvsp[-6].intval), (yyvsp[-4].intval), (yyvsp[-3].strval), (yyvsp[-1].strval));
                          free((yyvsp[-3].strval)); free((yyvsp[-1].strval)); }
#line 3329 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 787 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 3335 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 788 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 1;}
#line 3341 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 791 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 1; }
#line 3347 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 792 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3353 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 795 "pmysql.y" /* yacc.c:1646  */
    { emit("PRIKEY %d", (yyvsp[-1].intval)); }
#line 3359 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 796 "pmysql.y" /* yacc.c:1646  */
    { emit("KEY %d", (yyvsp[-1].intval)); }
#line 3365 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 797 "pmysql.y" /* yacc.c:1646  */
    { emit("KEY %d", (yyvsp[-1].intval)); }
#line 3371 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 798 "pmysql.y" /* yacc.c:1646  */
    { emit("TEXTINDEX %d", (yyvsp[-1].intval)); }
#line 3377 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 799 "pmysql.y" /* yacc.c:1646  */
    { emit("TEXTINDEX %d", (yyvsp[-1].intval)); }
#line 3383 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 802 "pmysql.y" /* yacc.c:1646  */
    { emit("STARTCOL"); }
#line 3389 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 803 "pmysql.y" /* yacc.c:1646  */
    { emit("COLUMNDEF %d %s", (yyvsp[-1].intval), (yyvsp[-2].strval)); free((yyvsp[-2].strval)); }
#line 3395 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 805 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 3401 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 806 "pmysql.y" /* yacc.c:1646  */
    { emit("ATTR NOTNULL"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3407 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 809 "pmysql.y" /* yacc.c:1646  */
    { emit("ATTR DEFAULT STRING %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3413 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 811 "pmysql.y" /* yacc.c:1646  */
    { emit("ATTR DEFAULT NUMBER %d", (yyvsp[0].intval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3419 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 813 "pmysql.y" /* yacc.c:1646  */
    { emit("ATTR DEFAULT FLOAT %g", (yyvsp[0].floatval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3425 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 815 "pmysql.y" /* yacc.c:1646  */
    { emit("ATTR DEFAULT BOOL %d", (yyvsp[0].intval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3431 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 817 "pmysql.y" /* yacc.c:1646  */
    { emit("ATTR AUTOINC"); (yyval.intval) = (yyvsp[-1].intval) + 1; }
#line 3437 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 819 "pmysql.y" /* yacc.c:1646  */
    { emit("ATTR UNIQUEKEY %d", (yyvsp[-1].intval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 3443 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 820 "pmysql.y" /* yacc.c:1646  */
    { emit("ATTR UNIQUEKEY"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3449 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 821 "pmysql.y" /* yacc.c:1646  */
    { emit("ATTR PRIKEY"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3455 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 822 "pmysql.y" /* yacc.c:1646  */
    { emit("ATTR PRIKEY"); (yyval.intval) = (yyvsp[-1].intval) + 1; }
#line 3461 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 824 "pmysql.y" /* yacc.c:1646  */
    { emit("ATTR COMMENT %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3467 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 827 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 3473 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 828 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-1].intval); }
#line 3479 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 829 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-3].intval) + 1000*(yyvsp[-1].intval); }
#line 3485 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 832 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 3491 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 833 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 4000; }
#line 3497 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 836 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 3503 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 837 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-1].intval) | 1000; }
#line 3509 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 838 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-1].intval) | 2000; }
#line 3515 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 842 "pmysql.y" /* yacc.c:1646  */
    { emit("COLCHARSET %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 3521 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 843 "pmysql.y" /* yacc.c:1646  */
    { emit("COLCOLLATE %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 3527 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 847 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 10000 + (yyvsp[0].intval); }
#line 3533 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 848 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 10000 + (yyvsp[-1].intval); }
#line 3539 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 849 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 20000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3545 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 850 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 30000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3551 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 851 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 40000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3557 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 852 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 50000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3563 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 853 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 60000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3569 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 854 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 70000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3575 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 855 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 80000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3581 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 856 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 90000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3587 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 857 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 110000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3593 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 858 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 100001; }
#line 3599 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 859 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 100002; }
#line 3605 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 860 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 100003; }
#line 3611 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 861 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 100004; }
#line 3617 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 862 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 100005; }
#line 3623 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 863 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 120000 + (yyvsp[-1].intval); }
#line 3629 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 864 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 130000 + (yyvsp[-2].intval); }
#line 3635 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 865 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 140000 + (yyvsp[0].intval); }
#line 3641 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 866 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 150000 + (yyvsp[-1].intval); }
#line 3647 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 867 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 160001; }
#line 3653 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 868 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 160002; }
#line 3659 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 869 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 160003; }
#line 3665 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 870 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 160004; }
#line 3671 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 871 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 170000 + (yyvsp[-1].intval); }
#line 3677 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 872 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 171000 + (yyvsp[-1].intval); }
#line 3683 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 873 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 172000 + (yyvsp[-1].intval); }
#line 3689 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 874 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 173000 + (yyvsp[-1].intval); }
#line 3695 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 875 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 200000 + (yyvsp[-2].intval); }
#line 3701 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 876 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 210000 + (yyvsp[-2].intval); }
#line 3707 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 289:
#line 879 "pmysql.y" /* yacc.c:1646  */
    { emit("ENUMVAL %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = 1; }
#line 3713 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 290:
#line 880 "pmysql.y" /* yacc.c:1646  */
    { emit("ENUMVAL %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3719 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 291:
#line 883 "pmysql.y" /* yacc.c:1646  */
    { emit("CREATESELECT %d", (yyvsp[-2].intval)); }
#line 3725 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 292:
#line 886 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 3731 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 293:
#line 887 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 1; }
#line 3737 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 294:
#line 888 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 2; }
#line 3743 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 295:
#line 893 "pmysql.y" /* yacc.c:1646  */
    { emit("STMT"); }
#line 3749 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 299:
#line 901 "pmysql.y" /* yacc.c:1646  */
    { if ((yyvsp[-1].subtok) != 4) { yyerror("bad set to @%s", (yyvsp[-2].strval)); YYERROR; }
                 emit("SET %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); }
#line 3756 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 300:
#line 903 "pmysql.y" /* yacc.c:1646  */
    { emit("SET %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); }
#line 3762 "pmysql.tab.c" /* yacc.c:1646  */
    break;


#line 3766 "pmysql.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 906 "pmysql.y" /* yacc.c:1906  */

void
emit(char *s, ...)
{
  extern yylineno;

  va_list ap;
  va_start(ap, s);

  printf("rpn: ");
  vfprintf(stdout, s, ap);
  printf("\n");
}

void
yyerror(char *s, ...)
{
  extern yylineno;

  va_list ap;
  va_start(ap, s);

  fprintf(stderr, "%d: error: ", yylineno);
  vfprintf(stderr, s, ap);
  fprintf(stderr, "\n");
}

main(int ac, char **av)
{
  extern FILE *yyin;

  if(ac > 1 && !strcmp(av[1], "-d")) {
    yydebug = 1; ac--; av++;
  }

  if(ac > 1 && (yyin = fopen(av[1], "r")) == NULL) {
    perror(av[1]);
    exit(1);
  }

  if(!yyparse())
    printf("SQL parse worked\n");
  else
    printf("SQL parse failed\n");
} /* main */
