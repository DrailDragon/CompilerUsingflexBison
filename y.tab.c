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
#line 1 "grp23.y" /* yacc.c:339  */

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <map>
	using namespace std;
	
	void yyerror(const char *s){
		//print error
	}
	int yylex();
	extern char* yytext;
	extern int yyleng;
	extern int lineNum;
	extern int varscope;
	int reg_count=0;
	int label_count=0;
	struct node{
		string NonTerminalName;
		vector<node*> child;
		string code=""; 
		string datatype=""; 
		node(vector<node*> v , string attr) 
		{
			child = v;	
			NonTerminalName = attr;
		}
	};

	node* mknode(vector<node*> v,string attr);
	void preorder(node*);
	void print_tokens();//test purpose
	void printSymTab();
	string getNewReg();
	string getNewLbl();
	node* root=NULL;

	
	vector< map<string,string> > symTab;
	int varscope=0;
	bool semanticError = false;
	bool syntacticError = false;
	
	int findIdScope(string id)
	{
		for(int i=varscope;i>=0;i--)
		{
			if(symTab[i].find(id) != symTab[i].end())	return varscope;
		}
		return -1;
	}

	

#line 124 "y.tab.c" /* yacc.c:339  */

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
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ID = 258,
    STR_LITERAL = 259,
    WHITESPACE = 260,
    CALL = 261,
    OP_IN = 262,
    AND = 263,
    OR = 264,
    LE = 265,
    GE = 266,
    EQ = 267,
    NE = 268,
    EOL = 269,
    UMINUS = 270,
    TYPEDEF = 271,
    PRINT_VAR = 272,
    PRINT_INT = 273,
    PRINT_STR = 274,
    PRINT_FLOAT = 275,
    SCAN = 276,
    INT = 277,
    SIGNED = 278,
    UNSIGNED = 279,
    FLOAT = 280,
    CONST = 281,
    VOID = 282,
    BOOL = 283,
    EOFV = 284,
    INT_CONST = 285,
    TRUEV = 286,
    FALSEV = 287,
    CASE = 288,
    DEFAULT = 289,
    IF = 290,
    ELSE = 291,
    SWITCH = 292,
    WHILE = 293,
    DO = 294,
    FOR = 295,
    CONTINUE = 296,
    BREAK = 297,
    RETURN = 298,
    BINOP = 299,
    IFX = 300
  };
#endif
/* Tokens.  */
#define ID 258
#define STR_LITERAL 259
#define WHITESPACE 260
#define CALL 261
#define OP_IN 262
#define AND 263
#define OR 264
#define LE 265
#define GE 266
#define EQ 267
#define NE 268
#define EOL 269
#define UMINUS 270
#define TYPEDEF 271
#define PRINT_VAR 272
#define PRINT_INT 273
#define PRINT_STR 274
#define PRINT_FLOAT 275
#define SCAN 276
#define INT 277
#define SIGNED 278
#define UNSIGNED 279
#define FLOAT 280
#define CONST 281
#define VOID 282
#define BOOL 283
#define EOFV 284
#define INT_CONST 285
#define TRUEV 286
#define FALSEV 287
#define CASE 288
#define DEFAULT 289
#define IF 290
#define ELSE 291
#define SWITCH 292
#define WHILE 293
#define DO 294
#define FOR 295
#define CONTINUE 296
#define BREAK 297
#define RETURN 298
#define BINOP 299
#define IFX 300

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 58 "grp23.y" /* yacc.c:355  */

		char* strv;
		struct node* nodeP;
		int	intv;
	

#line 261 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 278 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   165

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  63
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  64
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  107

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   300

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      58,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    54,     2,     2,     2,     2,    47,     2,
      61,    62,    52,    50,     2,    51,     2,    53,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    57,
      49,    45,    48,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    59,    46,    60,    55,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      56
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    97,    97,   106,   119,   128,   141,   164,   172,   180,
     188,   197,   205,   204,   220,   243,   252,   265,   274,   283,
     292,   305,   323,   336,   351,   370,   379,   388,   407,   432,
     440,   448,   456,   464,   473,   483,   500,   507,   514,   521,
     528,   535,   542,   549,   556,   563,   570,   577,   584,   592,
     609,   618,   627,   646,   655,   664,   668,   676,   683,   691,
     698,   705,   709,   718,   722
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "STR_LITERAL", "WHITESPACE",
  "CALL", "OP_IN", "AND", "OR", "LE", "GE", "EQ", "NE", "EOL", "UMINUS",
  "TYPEDEF", "PRINT_VAR", "PRINT_INT", "PRINT_STR", "PRINT_FLOAT", "SCAN",
  "INT", "SIGNED", "UNSIGNED", "FLOAT", "CONST", "VOID", "BOOL", "EOFV",
  "INT_CONST", "TRUEV", "FALSEV", "CASE", "DEFAULT", "IF", "ELSE",
  "SWITCH", "WHILE", "DO", "FOR", "CONTINUE", "BREAK", "RETURN", "BINOP",
  "'='", "'|'", "'&'", "'>'", "'<'", "'+'", "'-'", "'*'", "'/'", "'!'",
  "'~'", "IFX", "';'", "'\\n'", "'{'", "'}'", "'('", "')'", "$accept",
  "StrtP", "ExtDecl", "Decl", "TypeId", "Id", "BlockStmt", "$@1",
  "FuncDefn", "StmtList", "Stmt", "For", "IfStmt", "Exp", "Func_Call",
  "Opr", "InOut", "Integer", "Strng", "SemiCol", "LeftBrace", "RightBrace",
  "LeftParen", "RightParen", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,    61,   124,    38,    62,    60,
      43,    45,    42,    47,    33,   126,   300,    59,    10,   123,
     125,    40,    41
};
# endif

#define YYPACT_NINF -79

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-79)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      70,   -79,   -79,   -79,   -79,    13,   -79,   -79,    12,   -79,
     -79,   -79,   -79,     3,   -12,   -79,   -79,   -79,    -1,   -79,
     -79,   -42,   -79,     0,   -79,   -32,   -79,   -79,   -79,   -79,
      48,   -26,   -79,    12,    12,    14,    41,    11,   -79,   -79,
     -79,    10,    10,    14,   -79,    12,   112,     2,   -79,   -79,
     -79,     1,   -79,   -79,   112,   -79,    83,    10,   -79,   -79,
     -79,    12,    83,    83,   -79,     1,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,    83,
     -14,   -79,   -79,   -79,    -3,   -79,    83,    -1,    -1,   -79,
      -1,     1,   -79,   -79,   -79,   -79,   -79,     0,    83,    21,
       1,     0,    83,   -79,    -1,     0,   -79
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     7,     9,    10,     8,     0,     2,     4,     0,     5,
       1,     3,    11,     0,     0,    55,    61,     6,     0,    56,
      62,     0,    63,     0,    64,     0,    57,    14,    12,    58,
       0,     0,    54,     0,     0,     0,     0,     0,    53,    31,
      32,     0,     0,     0,    20,     0,    24,     0,    15,    18,
      19,     0,    29,    30,    33,    34,     0,     0,    49,    50,
      51,     0,     0,     0,    26,     0,    44,    42,    39,    40,
      36,    37,    38,    41,    43,    45,    46,    47,    48,     0,
       0,    59,    16,    13,     0,    17,     0,     0,     0,    52,
       0,     0,    28,    60,    27,    25,    35,     0,     0,    22,
       0,     0,     0,    23,     0,     0,    21
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -79,   -79,    67,   -16,    -8,    60,   -20,   -79,   -79,   -79,
      27,   -79,   -79,    54,   -79,    28,   -79,   -18,    71,   -44,
     -79,   -79,    78,   -78
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     5,     6,     7,     8,    46,    27,    30,     9,    47,
      48,    49,    50,    51,    52,    79,    53,    54,    55,    17,
      28,    83,    56,    23
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      21,    25,    84,    80,    14,    12,    32,    85,    33,    95,
      96,    31,    97,    10,    44,    12,    24,    59,    61,    34,
      35,    36,    45,    37,     1,    64,   105,     2,    29,     3,
       4,    44,    38,    39,    40,     1,    20,    41,     2,    45,
       3,     4,    42,    93,    38,    32,    19,    98,    20,    31,
      20,    12,    32,    43,    33,    19,   102,   101,    15,    26,
      15,    22,    81,    16,    16,    34,    35,    36,    13,    37,
       1,    16,    11,     2,    82,     3,     4,    99,    38,    39,
      40,   103,    86,    41,    31,   106,    12,    32,    42,    33,
       0,    18,     1,    57,    58,     2,     0,     3,     4,    43,
      34,    35,    36,     0,    37,    65,     0,    60,     0,    16,
      87,     0,     0,    38,    39,    40,    90,    91,     0,    62,
      63,    89,    66,    67,    68,    69,     0,     0,     0,     0,
       0,     0,     0,    92,    43,    88,     0,     0,     0,     0,
      94,     0,     0,     0,    16,     0,     0,     0,     0,     0,
       0,     0,   100,     0,     0,     0,   104,    70,    71,    72,
      73,    74,    75,    76,    77,    78
};

static const yytype_int8 yycheck[] =
{
       1,     1,     1,     1,     1,     3,     4,    51,     6,    87,
      88,     1,    90,     0,    30,     3,    58,    35,     7,    17,
      18,    19,    30,    21,    22,    43,   104,    25,    60,    27,
      28,    47,    30,    31,    32,    22,    62,    35,    25,    47,
      27,    28,    40,    57,    30,     4,    58,    91,    62,     1,
      62,     3,     4,    51,     6,    58,   100,    36,    57,    59,
      57,    62,    60,    61,    61,    17,    18,    19,     8,    21,
      22,    61,     5,    25,    47,    27,    28,    97,    30,    31,
      32,   101,    54,    35,     1,   105,     3,     4,    40,     6,
      -1,    13,    22,    33,    34,    25,    -1,    27,    28,    51,
      17,    18,    19,    -1,    21,    45,    -1,    36,    -1,    61,
      56,    -1,    -1,    30,    31,    32,    62,    63,    -1,    41,
      42,    61,    10,    11,    12,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    79,    51,    57,    -1,    -1,    -1,    -1,
      86,    -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    98,    -1,    -1,    -1,   102,    45,    46,    47,
      48,    49,    50,    51,    52,    53
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    22,    25,    27,    28,    64,    65,    66,    67,    71,
       0,    65,     3,    68,     1,    57,    61,    82,    85,    58,
      62,     1,    62,    86,    58,     1,    59,    69,    83,    60,
      70,     1,     4,     6,    17,    18,    19,    21,    30,    31,
      32,    35,    40,    51,    66,    67,    68,    72,    73,    74,
      75,    76,    77,    79,    80,    81,    85,    68,    68,    80,
      81,     7,    85,    85,    80,    68,    10,    11,    12,    13,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    78,
       1,    60,    73,    84,     1,    82,    78,    76,    85,    68,
      76,    76,    76,    57,    76,    86,    86,    86,    82,    69,
      76,    36,    82,    69,    76,    86,    69
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    63,    64,    64,    65,    65,    66,    67,    67,    67,
      67,    68,    70,    69,    71,    72,    72,    73,    73,    73,
      73,    74,    75,    75,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    77,    78,    78,    78,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    79,
      79,    79,    79,    80,    81,    82,    82,    83,    83,    84,
      84,    85,    85,    86,    86
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     3,     1,     1,     1,
       1,     1,     0,     4,     5,     1,     2,     2,     1,     1,
       1,     9,     5,     7,     1,     3,     2,     3,     3,     1,
       1,     1,     1,     1,     1,     4,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     2,     3,     1,     1,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     2
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
        case 2:
#line 98 "grp23.y" /* yacc.c:1646  */
    {
	vector<node*> v; 
	v.push_back((yyvsp[0].nodeP)); 
	(yyval.nodeP) = mknode(v,"StrtP");
	(yyval.nodeP)->code = (yyvsp[0].nodeP)->code;
//root=$$;
	//cout<<"StrtP: ExtDecl"<<endl;
}
#line 1455 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 107 "grp23.y" /* yacc.c:1646  */
    {
	vector<node*> v; 
	v.push_back((yyvsp[-1].nodeP)); 
	v.push_back((yyvsp[0].nodeP));
	(yyval.nodeP)= mknode(v,"StrtP");
	(yyval.nodeP)->code = (yyvsp[-1].nodeP)->code+"\n"+(yyvsp[0].nodeP)->code;
	root=(yyval.nodeP);
	//cout<<"StrtP->StrtP ExtDecl"<<endl;
}
#line 1469 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 120 "grp23.y" /* yacc.c:1646  */
    {
	vector<node*> v; 
	v.push_back((yyvsp[0].nodeP)) ; 
	(yyval.nodeP) = mknode(v,"ExtDecl");
	(yyval.nodeP)->code = (yyvsp[0].nodeP)->code;
	(yyval.nodeP)->datatype = "";
//cout<<"ExtDec->Decl"<<endl;
}
#line 1482 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 129 "grp23.y" /* yacc.c:1646  */
    {
	vector<node*> v; 
	v.push_back((yyvsp[0].nodeP)) ;
	(yyval.nodeP) = mknode(v,"ExtDecl");
	(yyval.nodeP)->code = (yyvsp[0].nodeP)->code;
	(yyval.nodeP)->datatype = "";
	//cout<<"ExtDec->\"FuncDefn"<<endl;
}
#line 1495 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 142 "grp23.y" /* yacc.c:1646  */
    {	
	vector<node*> v; 
	v.push_back((yyvsp[-2].nodeP));
	v.push_back((yyvsp[-1].nodeP));
	(yyval.nodeP)= mknode(v,"Decl");
	//printSymTab();
	if(symTab[varscope].find((yyvsp[-1].nodeP)->code)==symTab[varscope].end())
	{
		symTab[varscope][(yyvsp[-1].nodeP)->code] = (yyvsp[-2].nodeP)->datatype;
		(yyvsp[-1].nodeP)->datatype = (yyvsp[-2].nodeP)->datatype;
		(yyval.nodeP)->code = (yyvsp[-1].nodeP)->code+" "+(yyvsp[-2].nodeP)->code+"\n";
		
	}
	else
	{
		semanticError= true;
		cout <<"Re-declaration of "<<(yyvsp[-1].nodeP)->code<< " at line number " << lineNum <<endl;
	}
	
	//cout<<"Decl->TypeId Id SemiCol"<<endl;
}
#line 1521 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 165 "grp23.y" /* yacc.c:1646  */
    { 
	vector<node*> v;  
	(yyval.nodeP) = mknode(v,"TypeId");
	(yyval.nodeP)->code = "int";
	(yyval.nodeP)->datatype = "int";
	//cout<<"TypeId->INT"<<endl;
}
#line 1533 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 173 "grp23.y" /* yacc.c:1646  */
    { 
	vector<node*> v; 
	(yyval.nodeP) = mknode(v,"TypeId");
	(yyval.nodeP)->code = "bool";
	(yyval.nodeP)->datatype = "bool";
	//cout<<"TypeId->BOOL"<<endl;
}
#line 1545 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 181 "grp23.y" /* yacc.c:1646  */
    { 
	vector<node*> v; 
	(yyval.nodeP) = mknode(v,"TypeId");
	(yyval.nodeP)->code = "float";
	(yyval.nodeP)->datatype = "float";
	//cout<<"TypeId->FLOAT"<<endl;
}
#line 1557 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 189 "grp23.y" /* yacc.c:1646  */
    {
	vector<node*> v;
	(yyval.nodeP) = mknode(v,"TypeId");
	(yyval.nodeP)->code = "void";
	(yyval.nodeP)->datatype = "void";
	//cout<<"TypeId->VOID"<<endl;
}
#line 1569 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 198 "grp23.y" /* yacc.c:1646  */
    {
		vector<node*> v;
		(yyval.nodeP) = mknode(v,"Id");
		(yyval.nodeP)->code=string(yytext,yyleng);
	}
#line 1579 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 205 "grp23.y" /* yacc.c:1646  */
    {
		map<string,string>	m;
		symTab.push_back(m);
		varscope++;
	}
#line 1589 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 211 "grp23.y" /* yacc.c:1646  */
    {	
		vector<node*> v;
		v.push_back((yyvsp[-1].nodeP)); 
		(yyval.nodeP) = mknode(v,"BlockStmt");
		(yyval.nodeP)->code = (yyvsp[-1].nodeP)->code ; 
		symTab.pop_back();
		varscope--;
	}
#line 1602 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 221 "grp23.y" /* yacc.c:1646  */
    {
	vector<node*> v; 
	v.push_back((yyvsp[-4].nodeP));
	v.push_back((yyvsp[-3].nodeP));
	v.push_back((yyvsp[0].nodeP)); 
	(yyval.nodeP) = mknode(v,"FuncDefn");
	(yyval.nodeP)->datatype = "";
	
	if(symTab[varscope].find((yyvsp[-3].nodeP)->code)!=symTab[varscope].end())
	{
		cout<<"Re-declaration of function "<<(yyvsp[-3].nodeP)->code<<" at line number"<<lineNum<<endl;
	}
	else
	{
		symTab[varscope][(yyvsp[-3].nodeP)->code]=(yyvsp[-4].nodeP)->datatype;
		(yyval.nodeP)->code = "Fun "+(yyvsp[-3].nodeP)->code+"\n"+(yyvsp[0].nodeP)->code+"\n endFun";
	}
	//cout<<"FuncDefn:  TypeId ID LeftParen RightParen LeftBrace StmtList RightBrace "<<endl;
}
#line 1626 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 244 "grp23.y" /* yacc.c:1646  */
    {
	vector<node*> v;
	v.push_back((yyvsp[0].nodeP)); 
	(yyval.nodeP) = mknode(v,"StmtList");
	(yyval.nodeP)->code = (yyvsp[0].nodeP)->code;
	(yyval.nodeP)->datatype = (yyvsp[0].nodeP)->datatype;
	//cout<<"StmtList: Stmt "<<endl;
}
#line 1639 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 253 "grp23.y" /* yacc.c:1646  */
    {
	vector<node*> v;
	v.push_back((yyvsp[-1].nodeP));
	v.push_back((yyvsp[0].nodeP));
	(yyval.nodeP) = mknode(v,"StmtList");
	(yyval.nodeP)->code = (yyvsp[-1].nodeP)->code+"\n"+(yyvsp[0].nodeP)->code;
	//cout<<"StmtList->StmtList  Stmt"<<endl;
}
#line 1652 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 266 "grp23.y" /* yacc.c:1646  */
    {
	vector<node*> v; 
	v.push_back((yyvsp[-1].nodeP));  
	(yyval.nodeP) = mknode(v,"Stmt");
	(yyval.nodeP)->code= (yyvsp[-1].nodeP)->code;
	(yyval.nodeP)->datatype = (yyvsp[-1].nodeP)->datatype;
	//cout<<"Exp->Exp SemiCol "<<endl;
}
#line 1665 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 275 "grp23.y" /* yacc.c:1646  */
    {
	vector<node*> v; 
	v.push_back((yyvsp[0].nodeP));
	(yyval.nodeP) = mknode(v,"Stmt");
	(yyval.nodeP)->code= (yyvsp[0].nodeP)->code;
	(yyval.nodeP)->datatype = (yyvsp[0].nodeP)->datatype;
	//cout<<"Stmt->For"<<endl;
}
#line 1678 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 284 "grp23.y" /* yacc.c:1646  */
    {
	vector<node*> v; 
	v.push_back((yyvsp[0].nodeP)); 
	(yyval.nodeP) = mknode(v,"Stmt");
	(yyval.nodeP)->code= (yyvsp[0].nodeP)->code;
	(yyval.nodeP)->datatype = (yyvsp[0].nodeP)->datatype;
	//cout<<"Stmt->IfStmt"<<endl;
}
#line 1691 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 293 "grp23.y" /* yacc.c:1646  */
    {
	//printSymTab();
	vector<node*> v;
	v.push_back((yyvsp[0].nodeP));
	(yyval.nodeP) = mknode(v,"Stmt");
	(yyval.nodeP)->code= (yyvsp[0].nodeP)->code;
	(yyval.nodeP)->datatype = (yyvsp[0].nodeP)->datatype;
	//cout<<"Stmt->Decl"<<endl;
}
#line 1705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 306 "grp23.y" /* yacc.c:1646  */
    { 
	vector<node*> v; 
	v.push_back((yyvsp[-6].nodeP)); //initialize
	v.push_back((yyvsp[-4].nodeP)); 
	v.push_back((yyvsp[-2].nodeP));  
	v.push_back((yyvsp[0].nodeP)); 
	(yyval.nodeP) = mknode(v,"For");
	string lentry = getNewLbl();
	string lbody = getNewLbl();
	string lexit = getNewLbl();
	(yyval.nodeP)->code =(yyvsp[-6].nodeP)->code+"\n"+lentry+": "+"if "+(yyvsp[-4].nodeP)->code+" goto  "+ lbody+"\n"+"goto  "+lexit+ "\n"+lbody+": "+(yyvsp[0].nodeP)->code+"\n"+(yyvsp[-2].nodeP)->code+"\ngoto   "+lentry+"\n"+lexit+":\n"; 
	(yyval.nodeP)->datatype ="";
	//cout<<"For: FOR LeftParen Exp SemiCol Exp SemiCol Exp RightParen LeftBrace StmtList RightBrace"<<endl;
}
#line 1724 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 324 "grp23.y" /* yacc.c:1646  */
    {
	vector<node*> v;
	v.push_back((yyvsp[-2].nodeP));  
	v.push_back((yyvsp[0].nodeP)); 
	(yyval.nodeP) = mknode(v,"IfStmt");
	string lbody = getNewLbl();
	string lexit = getNewLbl();

	(yyval.nodeP)->code = "if "+(yyvsp[-2].nodeP)->code+ "goto "+ lbody+"\n"+"goto  "+lexit+"\n"+lbody+":"+(yyvsp[0].nodeP)->code+"\n"+lexit+":\n";	//code for ifstmt
	(yyval.nodeP)->datatype = ""; 
	//cout<<"IfStmt: IF LeftParen Exp RightParen LeftBrace StmtList RightBrace %prec IFX"<<endl;
}
#line 1741 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 337 "grp23.y" /* yacc.c:1646  */
    {
	vector<node*> v; 
	v.push_back((yyvsp[-4].nodeP)); 
	v.push_back((yyvsp[-2].nodeP)); 
	v.push_back((yyvsp[0].nodeP));
	(yyval.nodeP) = mknode(v,"IfStmt");
	string ltrue= getNewLbl();
	string lfalse = getNewLbl();
	string lexit = getNewLbl();
	(yyval.nodeP)->code ="if "+(yyvsp[-4].nodeP)->code+" goto "+ltrue+"\n"+lfalse+":"+(yyvsp[0].nodeP)->code+"\ngoto "+lexit+"\n"+ltrue+":"+(yyvsp[-2].nodeP)->code+"\n"+lexit+":\n";
	(yyval.nodeP)->datatype ="";
	//cout<<"IfStmt-> IF LeftParen Exp RightParen LeftBrace StmtList RightBrace ELSE LeftBrace StmtList RightBrace "<<endl;
}
#line 1759 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 352 "grp23.y" /* yacc.c:1646  */
    {
	vector<node*> v; 
	v.push_back((yyvsp[0].nodeP));  
	(yyval.nodeP) = mknode(v,"Exp");
	int idscope = findIdScope((yyvsp[0].nodeP)->code);
	if(idscope == -1)
	{
		semanticError = true;
		cout << "Undeclared variable " << (yyvsp[0].nodeP)->code <<" at line number " << lineNum<< endl;	
	}
	else
	{
		(yyval.nodeP)->datatype = symTab[idscope][(yyvsp[0].nodeP)->code];
		(yyval.nodeP)->code = (yyvsp[0].nodeP)->code;
		(yyval.nodeP)->datatype = (yyvsp[0].nodeP)->code;
	} 
	//cout<<"Exp->Id"<<endl;
}
#line 1782 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 371 "grp23.y" /* yacc.c:1646  */
    {
	vector<node*> v;  
	v.push_back((yyvsp[-1].nodeP));
	(yyval.nodeP) = mknode(v,"Exp");
	(yyval.nodeP)->datatype = (yyvsp[-1].nodeP)->datatype;
	(yyval.nodeP)->code = (yyvsp[-1].nodeP)->code;
	//cout<<"Exp->LeftParen Exp RightParen "<<endl;
}
#line 1795 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 380 "grp23.y" /* yacc.c:1646  */
    {
	vector<node*> v; 
	v.push_back((yyvsp[0].nodeP));
	(yyval.nodeP) = mknode(v,"Exp");
	(yyval.nodeP)->code ="- " + (yyvsp[0].nodeP)->code;
	(yyval.nodeP)->datatype=(yyvsp[0].nodeP)->datatype;
	//cout<<"Exp->'-' %prec UMINUS Exp"<<endl;
}
#line 1808 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 389 "grp23.y" /* yacc.c:1646  */
    {
	vector<node*> v; 
	v.push_back((yyvsp[-2].nodeP));
	v.push_back((yyvsp[-1].nodeP)); 
	v.push_back((yyvsp[0].nodeP));
	(yyval.nodeP) = mknode(v,"Exp");
	if((yyvsp[-2].nodeP)->datatype != (yyvsp[0].nodeP)->datatype)
		{
			semanticError = true;
			cout<<"Mismatching data types of operands at line number "<<lineNum<<endl;
		}
		else
		{
			(yyval.nodeP)->code =(yyvsp[-1].nodeP)->code+" "+(yyvsp[-2].nodeP)->code+" "+(yyvsp[0].nodeP)->code;
			(yyval.nodeP)->datatype = (yyvsp[-2].nodeP)->datatype;
		}
	//cout<<"Exp->Integer Opr Exp  "<<endl;
}
#line 1831 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 408 "grp23.y" /* yacc.c:1646  */
    {
	vector<node*> v; 
	v.push_back((yyvsp[-2].nodeP));
	v.push_back((yyvsp[-1].nodeP)); 
	v.push_back((yyvsp[0].nodeP));
	(yyval.nodeP) = mknode(v,"Exp");
	int idscope = findIdScope((yyvsp[-2].nodeP)->code);
		if(idscope == -1)
		{
			semanticError = true;
			cout << "Undeclared variable "<< (yyvsp[-2].nodeP)->code <<" at line number "<<lineNum<<endl;	
		}
		/*else if(symTab[idscope][$1->code] != $3->datatype)
		{
			semanticError = true;
			cout<<"Mismatching data types of operands at line number "<<lineNum<<endl;
		}*/
		else
		{
			(yyval.nodeP)->datatype = (yyvsp[-2].nodeP)->datatype;
			(yyval.nodeP)->code =(yyvsp[-1].nodeP)->code+" "+(yyvsp[-2].nodeP)->code+" "+(yyvsp[0].nodeP)->code;
		}
	//cout<<"Exp->Id Opr Exp  "<<endl;
}
#line 1860 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 433 "grp23.y" /* yacc.c:1646  */
    {
	vector<node*> v; 
	(yyval.nodeP) = mknode(v,"Exp");
	(yyval.nodeP)->code= (yyvsp[0].nodeP)->code;
	(yyval.nodeP)->datatype = (yyvsp[0].nodeP) ->datatype;
	//cout<<"Exp->FUNC_CALL"<<endl;
}
#line 1872 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 441 "grp23.y" /* yacc.c:1646  */
    { 
	vector<node*> v; 
	v.push_back((yyvsp[0].nodeP));
	(yyval.nodeP) = mknode(v,"Exp");
	(yyval.nodeP)->code = (yyvsp[0].nodeP)->code;
	//cout<<"Exp->InOut"<<endl;
}
#line 1884 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 449 "grp23.y" /* yacc.c:1646  */
    {
	vector<node*> v; 
	(yyval.nodeP) = mknode(v,"Exp");
	(yyval.nodeP)->datatype = "bool";
	(yyval.nodeP)->code = "true";
	//cout<<"Exp->TRUEV"<<endl;
}
#line 1896 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 457 "grp23.y" /* yacc.c:1646  */
    {
	vector<node*> v;
	(yyval.nodeP) = mknode(v,"Exp");
	(yyval.nodeP)->code = "false";
	(yyval.nodeP)->datatype = "bool";
	//cout<<"Exp->FALSEV"<<endl;
}
#line 1908 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 465 "grp23.y" /* yacc.c:1646  */
    {
	vector<node*> v; 
	v.push_back((yyvsp[0].nodeP)); 
	(yyval.nodeP) = mknode(v,"Exp");
	(yyval.nodeP)->datatype = (yyvsp[0].nodeP)->datatype;
	(yyval.nodeP)->code = (yyvsp[0].nodeP)->code;
	//cout<<"Exp->Integer"<<endl;
}
#line 1921 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 474 "grp23.y" /* yacc.c:1646  */
    {
	vector<node*> v;
	v.push_back((yyvsp[0].nodeP));
	(yyval.nodeP) = mknode(v,"Exp");
	(yyval.nodeP)->datatype = (yyvsp[0].nodeP)->datatype;
	(yyval.nodeP)->code = (yyvsp[0].nodeP)->code;
	//cout<<"Exp->Strng"<<endl;
}
#line 1934 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 484 "grp23.y" /* yacc.c:1646  */
    {
		vector<node*> v;
		v.push_back((yyvsp[-2].nodeP));
		(yyval.nodeP) = mknode(v,"Func_Call");
		int fscope=findIdScope((yyvsp[-2].nodeP)->code);
		if(fscope == -1)
		{
			cout<<"Reference to Undefined function"<<(yyvsp[-2].nodeP)->code<<"at line number "<<lineNum<<endl;
		}
		else
		{
			(yyval.nodeP)->datatype = symTab[fscope][(yyvsp[-2].nodeP)->code];
			(yyval.nodeP)->code="call "+(yyvsp[-2].nodeP)->code;
		}
	}
#line 1954 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 501 "grp23.y" /* yacc.c:1646  */
    {
	vector<node*> v;
	(yyval.nodeP) = mknode(v,"Opr");
	(yyval.nodeP)->code = "=";
	//cout<<"Opr->'='"<<endl;
}
#line 1965 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 508 "grp23.y" /* yacc.c:1646  */
    {
	vector<node*> v;
	(yyval.nodeP) = mknode(v,"Opr");
	(yyval.nodeP)->code = "|";
	cout<<"Opr->'|'"<<endl;
}
#line 1976 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 515 "grp23.y" /* yacc.c:1646  */
    {
	vector<node*> v;
	(yyval.nodeP) = mknode(v,"Opr");
	(yyval.nodeP)->code = "&";
	//cout<<"Opr->'&'"<<endl;
}
#line 1987 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 522 "grp23.y" /* yacc.c:1646  */
    {
	vector<node*> v;
	(yyval.nodeP) = mknode(v,"Opr");
	(yyval.nodeP)->code = "==";
	//cout<<"Opr->EQ"<<endl;
}
#line 1998 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 529 "grp23.y" /* yacc.c:1646  */
    {
	vector<node*> v;
	(yyval.nodeP) = mknode(v,"Opr");
	(yyval.nodeP)->code = "!=";
	//cout<<"Opr->NE"<<endl;
}
#line 2009 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 536 "grp23.y" /* yacc.c:1646  */
    {
	vector<node*> v;
	(yyval.nodeP) = mknode(v,"Opr");
	(yyval.nodeP)->code = ">";
	//cout<<"Opr->'>'"<<endl;
}
#line 2020 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 543 "grp23.y" /* yacc.c:1646  */
    {
	vector<node*> v;
	(yyval.nodeP) = mknode(v,"Opr");
	(yyval.nodeP)->code = ">=";
	//cout<<"Opr->GE"<<endl;
}
#line 2031 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 550 "grp23.y" /* yacc.c:1646  */
    {
	vector<node*> v;
	(yyval.nodeP) = mknode(v,"Opr");
	(yyval.nodeP)->code = "<";
	//cout<<"Opr->'<'"<<endl;
}
#line 2042 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 557 "grp23.y" /* yacc.c:1646  */
    {
	vector<node*> v;
	(yyval.nodeP) = mknode(v,"Opr");
	(yyval.nodeP)->code = "<=";
	//cout<<"Opr->LE"<<endl;
}
#line 2053 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 564 "grp23.y" /* yacc.c:1646  */
    {
	vector<node*> v;
	(yyval.nodeP) = mknode(v,"Opr");
	(yyval.nodeP)->code = "+";
	//cout<<"Opr->'+'"<<endl;
}
#line 2064 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 571 "grp23.y" /* yacc.c:1646  */
    {
	vector<node*> v;
	(yyval.nodeP) = mknode(v,"Opr");
	(yyval.nodeP)->code = "-";
	//cout<<"Opr->'-"<<endl;
}
#line 2075 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 578 "grp23.y" /* yacc.c:1646  */
    {
	vector<node*> v;
	(yyval.nodeP) = mknode(v,"Opr");
	(yyval.nodeP)->code = "*";
	//cout<<"Opr->'*'"<<endl;
}
#line 2086 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 585 "grp23.y" /* yacc.c:1646  */
    {
	vector<node*> v;
	(yyval.nodeP) = mknode(v,"Opr");
	(yyval.nodeP)->code = "/";
	//cout<<"Opr->'/'"<<endl;
}
#line 2097 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 593 "grp23.y" /* yacc.c:1646  */
    {
	vector<node*> v;
	v.push_back((yyvsp[0].nodeP)); 
	(yyval.nodeP) = mknode(v,"InOut");
	int idscope = findIdScope((yyvsp[0].nodeP)->code);
	if(idscope == -1){
		semanticError = true;
		cout<<"Undeclared identifier at line number "<<lineNum<<endl;
	}
	else
	{
		(yyval.nodeP)->datatype = "";
		(yyval.nodeP)->code ="print_"+symTab[idscope][(yyvsp[0].nodeP)->code]+" "+(yyvsp[0].nodeP)->code+"\n";
	}
	//cout<<"InOut: PRINT_VAR Id "<<endl;
}
#line 2118 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 610 "grp23.y" /* yacc.c:1646  */
    {
	vector<node*> v; 
	v.push_back((yyvsp[0].nodeP)); 
	(yyval.nodeP) = mknode(v,"InOut");
	(yyval.nodeP)->datatype = "";
	(yyval.nodeP)->code ="print_int "+(yyvsp[0].nodeP)->code+"\n";
	//cout<<"Inout-> PRINT_INT INT_CONST "<<endl;
}
#line 2131 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 619 "grp23.y" /* yacc.c:1646  */
    {
	vector<node*> v; 
	v.push_back((yyvsp[0].nodeP)); 
	(yyval.nodeP) = mknode(v,"InOut");
	(yyval.nodeP)->datatype = "";
	(yyval.nodeP)->code = "print_str "+(yyvsp[0].nodeP)->code+"\n";
	//cout<<"Inout-> PRINT_STR STR_LITERAL "<<endl;
}
#line 2144 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 628 "grp23.y" /* yacc.c:1646  */
    {
	vector<node*> v;
	v.push_back((yyvsp[0].nodeP));
	(yyval.nodeP) = mknode(v,"InOut");
	
	int idscope = findIdScope((yyvsp[0].nodeP)->code);
	if(idscope == -1){
		semanticError = true;
		cout<<"Undeclared identifier at line number "<<lineNum<<endl;
	}
	else
	{
	(yyval.nodeP)->code = "read "+(yyvsp[0].nodeP)->datatype+" "+(yyvsp[0].nodeP)->code+"\n";
	(yyval.nodeP)->datatype = "";
	}
	//cout<<"Inout->SCAN OP_IN ID  "<<endl;
}
#line 2166 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 647 "grp23.y" /* yacc.c:1646  */
    {
			vector<node*> v; 
			(yyval.nodeP) = mknode(v,"Integer");
			(yyval.nodeP)->code = string(yytext,yyleng);
			(yyval.nodeP)->datatype = "int";
		}
#line 2177 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 656 "grp23.y" /* yacc.c:1646  */
    {
			vector<node*> v; 
			(yyval.nodeP) = mknode(v,"Strng");
			(yyval.nodeP)->code = string(yytext,yyleng);
			(yyval.nodeP)->datatype = "string";
		}
#line 2188 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 665 "grp23.y" /* yacc.c:1646  */
    {
	//cout<<"SemiCol : ';' "<<endl;
}
#line 2196 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 669 "grp23.y" /* yacc.c:1646  */
    {
	syntacticError = true;
	cout<<"Missing semicolon at lineNumber "<<lineNum<<endl;
	 yyerrok;
	  }
#line 2206 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 677 "grp23.y" /* yacc.c:1646  */
    {
					map<string,string>	m;
					symTab.push_back(m);
					varscope++;
					//cout<<"{\nCurrent varscope"<<varscope<<endl;
					}
#line 2217 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 684 "grp23.y" /* yacc.c:1646  */
    {
					syntacticError = true;
	  				cout<<"Missing '{' at line number "<<lineNum<<endl;
	   				yyerrok;
	    		}
#line 2227 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 692 "grp23.y" /* yacc.c:1646  */
    {
					symTab.pop_back();
					varscope--;
					//cout<<" varscope decremented to "<<varscope<<endl;
					//cout<<"RightBrace->\"}\""<<endl;
				}
#line 2238 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 699 "grp23.y" /* yacc.c:1646  */
    {
 						syntacticError = true; 
 						cout<<"Missing '}' at line number "<<lineNum<<endl;
 	 					yyerrok; 
 	 				}
#line 2248 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 706 "grp23.y" /* yacc.c:1646  */
    {
	//cout<<"LeftParen: '('"<<endl;
}
#line 2256 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 710 "grp23.y" /* yacc.c:1646  */
    { 
		syntacticError = true;
		cout<<"Missing '(' at line number "<<lineNum<<endl;
		 yyerrok; 
		}
#line 2266 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 719 "grp23.y" /* yacc.c:1646  */
    {
	//cout<<"RightParen: ')'	"<<endl;
}
#line 2274 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 723 "grp23.y" /* yacc.c:1646  */
    { 
	 syntacticError = true;
	 cout<<"Missing ')' at line number "<<lineNum<<endl; 
	 yyerrok;
	 }
#line 2284 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2288 "y.tab.c" /* yacc.c:1646  */
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
#line 729 "grp23.y" /* yacc.c:1906  */


struct node* mknode(vector<node*> v,string attr){
	struct node* n = new node(v,attr);
	return n;
}
void treeprint(int tab){
	for(int i=0;i<tab;i++) cout<<"\t";
}
void preorder(struct node* root,int cnt){
	treeprint(cnt);
	if(root){
		cout<<root->NonTerminalName<<endl;
		std::vector<struct node*>::iterator i=root->child.begin();
		while(i!=root->child.end()){
			preorder(*i,cnt+1);
			++i;
		}
	}else{
	cout<<"NULL";
	}	
}
void printSymTab(){
		//cout<<"Symboltablesize"<<symTab.size()<<endl;
	for(int i=0;i<symTab.size();i++){
		cout<<"Scope: "<<i<<endl;
		for(auto j = symTab[i].begin();j!=symTab[i].end();j++){
			cout<<j->first<<" "<<j->second<<endl;
		}
	}
}
string getNewReg(){
	stringstream R;
	++reg_count; //Assume infinite registers are available for three address code
	R<<reg_count; 
	return string("r"+R.str());
}
string getNewLbl(){
	stringstream lb;
	lb<<++label_count;
	return string("Lbl"+lb.str());
	}
int main()
{
	map<string,string> temp;
	symTab.push_back(temp);
	yyparse();
	//preorder(root,0);
	//cout<<root->code<<endl;
	if(!syntacticError && !semanticError){
	//cout<<"Parsing successful"<<endl;
	cout<<root->code<<endl;
	}
	//printSymTab();
	return 0;
}




