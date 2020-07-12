/* A Bison parser, made by GNU Bison 3.3.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_CONFIG_PARSER_H_INCLUDED
# define YY_YY_CONFIG_PARSER_H_INCLUDED
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
    ADDRESS_FAMILY = 258,
    AWAY = 259,
    BAN_UNKNOWN = 260,
    BLACKLIST = 261,
    BYTES = 262,
    KBYTES = 263,
    MBYTES = 264,
    CHANNEL = 265,
    COMMAND_INTERVAL = 266,
    COMMAND_QUEUE_SIZE = 267,
    COMMAND_TIMEOUT = 268,
    CONNREGEX = 269,
    DNS_FDLIMIT = 270,
    DNS_TIMEOUT = 271,
    DNSBL_FROM = 272,
    DNSBL_TO = 273,
    EXEMPT = 274,
    FD = 275,
    INVITE = 276,
    IPV4 = 277,
    IPV6 = 278,
    IRC = 279,
    KLINE = 280,
    KEY = 281,
    MASK = 282,
    MAX_READ = 283,
    MODE = 284,
    NAME = 285,
    NEGCACHE = 286,
    NEGCACHE_REBUILD = 287,
    NICK = 288,
    NICKSERV = 289,
    NOTICE = 290,
    OPER = 291,
    OPM = 292,
    OPTIONS = 293,
    PASSWORD = 294,
    PERFORM = 295,
    PIDFILE = 296,
    PORT = 297,
    PROTOCOL = 298,
    RSA_PRIVATE_KEY_FILE = 299,
    READTIMEOUT = 300,
    REALNAME = 301,
    RECONNECTINTERVAL = 302,
    REPLY = 303,
    SCANLOG = 304,
    SCANNER = 305,
    SECONDS = 306,
    MINUTES = 307,
    HOURS = 308,
    DAYS = 309,
    WEEKS = 310,
    MONTHS = 311,
    YEARS = 312,
    SENDMAIL = 313,
    SERVER = 314,
    TARGET_IP = 315,
    TARGET_PORT = 316,
    TARGET_STRING = 317,
    TIMEOUT = 318,
    TLS = 319,
    TLS_CERTIFICATE_FILE = 320,
    TLS_HOSTNAME_VERIFICATION = 321,
    TYPE = 322,
    USERNAME = 323,
    USER = 324,
    VHOST = 325,
    NUMBER = 326,
    STRING = 327,
    PROTOCOLTYPE = 328
  };
#endif
/* Tokens.  */
#define ADDRESS_FAMILY 258
#define AWAY 259
#define BAN_UNKNOWN 260
#define BLACKLIST 261
#define BYTES 262
#define KBYTES 263
#define MBYTES 264
#define CHANNEL 265
#define COMMAND_INTERVAL 266
#define COMMAND_QUEUE_SIZE 267
#define COMMAND_TIMEOUT 268
#define CONNREGEX 269
#define DNS_FDLIMIT 270
#define DNS_TIMEOUT 271
#define DNSBL_FROM 272
#define DNSBL_TO 273
#define EXEMPT 274
#define FD 275
#define INVITE 276
#define IPV4 277
#define IPV6 278
#define IRC 279
#define KLINE 280
#define KEY 281
#define MASK 282
#define MAX_READ 283
#define MODE 284
#define NAME 285
#define NEGCACHE 286
#define NEGCACHE_REBUILD 287
#define NICK 288
#define NICKSERV 289
#define NOTICE 290
#define OPER 291
#define OPM 292
#define OPTIONS 293
#define PASSWORD 294
#define PERFORM 295
#define PIDFILE 296
#define PORT 297
#define PROTOCOL 298
#define RSA_PRIVATE_KEY_FILE 299
#define READTIMEOUT 300
#define REALNAME 301
#define RECONNECTINTERVAL 302
#define REPLY 303
#define SCANLOG 304
#define SCANNER 305
#define SECONDS 306
#define MINUTES 307
#define HOURS 308
#define DAYS 309
#define WEEKS 310
#define MONTHS 311
#define YEARS 312
#define SENDMAIL 313
#define SERVER 314
#define TARGET_IP 315
#define TARGET_PORT 316
#define TARGET_STRING 317
#define TIMEOUT 318
#define TLS 319
#define TLS_CERTIFICATE_FILE 320
#define TLS_HOSTNAME_VERIFICATION 321
#define TYPE 322
#define USERNAME 323
#define USER 324
#define VHOST 325
#define NUMBER 326
#define STRING 327
#define PROTOCOLTYPE 328

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 95 "config-parser.y" /* yacc.c:1921  */

  int number;
  char *string;

#line 209 "config-parser.h" /* yacc.c:1921  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_CONFIG_PARSER_H_INCLUDED  */
