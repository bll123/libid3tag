/* ANSI-C code produced by gperf version 3.1 */
/* Command-line: /usr/bin/gperf -tCcTonD -K id -N id3_frametype_lookup -s -3 -k '*' --output-file=/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.c /home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf  */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gperf@gnu.org>."
#endif

#line 1 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"

/*
 * libid3tag - ID3 tag manipulation library
 * Copyright (C) 2000-2004 Underbit Technologies, Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */

# include "global.h"

# include <string.h>

# include "id3tag.h"
# include "frametype.h"

# define FIELDS(id)  static enum id3_field_type const fields_##id[]

/* frame field descriptions */

FIELDS(UFID) = {
  ID3_FIELD_TYPE_LATIN1,
  ID3_FIELD_TYPE_BINARYDATA
};

FIELDS(TXXX) = {
  ID3_FIELD_TYPE_TEXTENCODING,
  ID3_FIELD_TYPE_STRING,
  ID3_FIELD_TYPE_STRING
};

FIELDS(WXXX) = {
  ID3_FIELD_TYPE_TEXTENCODING,
  ID3_FIELD_TYPE_STRING,
  ID3_FIELD_TYPE_LATIN1
};

FIELDS(MCDI) = {
  ID3_FIELD_TYPE_BINARYDATA
};

FIELDS(ETCO) = {
  ID3_FIELD_TYPE_INT8,
  ID3_FIELD_TYPE_BINARYDATA
};

FIELDS(MLLT) = {
  ID3_FIELD_TYPE_INT16,
  ID3_FIELD_TYPE_INT24,
  ID3_FIELD_TYPE_INT24,
  ID3_FIELD_TYPE_INT8,
  ID3_FIELD_TYPE_INT8,
  ID3_FIELD_TYPE_BINARYDATA
};

FIELDS(SYTC) = {
  ID3_FIELD_TYPE_INT8,
  ID3_FIELD_TYPE_BINARYDATA
};

FIELDS(USLT) = {
  ID3_FIELD_TYPE_TEXTENCODING,
  ID3_FIELD_TYPE_LANGUAGE,
  ID3_FIELD_TYPE_STRING,
  ID3_FIELD_TYPE_STRINGFULL
};

FIELDS(SYLT) = {
  ID3_FIELD_TYPE_TEXTENCODING,
  ID3_FIELD_TYPE_LANGUAGE,
  ID3_FIELD_TYPE_INT8,
  ID3_FIELD_TYPE_INT8,
  ID3_FIELD_TYPE_STRING,
  ID3_FIELD_TYPE_BINARYDATA
};

FIELDS(COMM) = {
  ID3_FIELD_TYPE_TEXTENCODING,
  ID3_FIELD_TYPE_LANGUAGE,
  ID3_FIELD_TYPE_STRING,
  ID3_FIELD_TYPE_STRINGFULL
};

FIELDS(RVA2) = {
  ID3_FIELD_TYPE_LATIN1,
  ID3_FIELD_TYPE_BINARYDATA
};

FIELDS(EQU2) = {
  ID3_FIELD_TYPE_INT8,
  ID3_FIELD_TYPE_LATIN1,
  ID3_FIELD_TYPE_BINARYDATA
};

FIELDS(RVRB) = {
  ID3_FIELD_TYPE_INT16,
  ID3_FIELD_TYPE_INT16,
  ID3_FIELD_TYPE_INT8,
  ID3_FIELD_TYPE_INT8,
  ID3_FIELD_TYPE_INT8,
  ID3_FIELD_TYPE_INT8,
  ID3_FIELD_TYPE_INT8,
  ID3_FIELD_TYPE_INT8,
  ID3_FIELD_TYPE_INT8,
  ID3_FIELD_TYPE_INT8
};

FIELDS(APIC) = {
  ID3_FIELD_TYPE_TEXTENCODING,
  ID3_FIELD_TYPE_LATIN1,
  ID3_FIELD_TYPE_INT8,
  ID3_FIELD_TYPE_STRING,
  ID3_FIELD_TYPE_BINARYDATA
};

FIELDS(GEOB) = {
  ID3_FIELD_TYPE_TEXTENCODING,
  ID3_FIELD_TYPE_LATIN1,
  ID3_FIELD_TYPE_STRING,
  ID3_FIELD_TYPE_STRING,
  ID3_FIELD_TYPE_BINARYDATA
};

FIELDS(PCNT) = {
  ID3_FIELD_TYPE_INT32PLUS
};

FIELDS(POPM) = {
  ID3_FIELD_TYPE_LATIN1,
  ID3_FIELD_TYPE_INT8,
  ID3_FIELD_TYPE_INT32PLUS
};

FIELDS(RBUF) = {
  ID3_FIELD_TYPE_INT24,
  ID3_FIELD_TYPE_INT8,
  ID3_FIELD_TYPE_INT32
};

FIELDS(AENC) = {
  ID3_FIELD_TYPE_LATIN1,
  ID3_FIELD_TYPE_INT16,
  ID3_FIELD_TYPE_INT16,
  ID3_FIELD_TYPE_BINARYDATA
};

FIELDS(LINK) = {
  ID3_FIELD_TYPE_FRAMEID,
  ID3_FIELD_TYPE_LATIN1,
  ID3_FIELD_TYPE_LATIN1LIST
};

FIELDS(POSS) = {
  ID3_FIELD_TYPE_INT8,
  ID3_FIELD_TYPE_BINARYDATA
};

FIELDS(USER) = {
  ID3_FIELD_TYPE_TEXTENCODING,
  ID3_FIELD_TYPE_LANGUAGE,
  ID3_FIELD_TYPE_STRING
};

FIELDS(OWNE) = {
  ID3_FIELD_TYPE_TEXTENCODING,
  ID3_FIELD_TYPE_LATIN1,
  ID3_FIELD_TYPE_DATE,
  ID3_FIELD_TYPE_STRING
};

FIELDS(COMR) = {
  ID3_FIELD_TYPE_TEXTENCODING,
  ID3_FIELD_TYPE_LATIN1,
  ID3_FIELD_TYPE_DATE,
  ID3_FIELD_TYPE_LATIN1,
  ID3_FIELD_TYPE_INT8,
  ID3_FIELD_TYPE_STRING,
  ID3_FIELD_TYPE_STRING,
  ID3_FIELD_TYPE_LATIN1,
  ID3_FIELD_TYPE_BINARYDATA
};

FIELDS(ENCR) = {
  ID3_FIELD_TYPE_LATIN1,
  ID3_FIELD_TYPE_INT8,
  ID3_FIELD_TYPE_BINARYDATA
};

FIELDS(GRID) = {
  ID3_FIELD_TYPE_LATIN1,
  ID3_FIELD_TYPE_INT8,
  ID3_FIELD_TYPE_BINARYDATA
};

FIELDS(PRIV) = {
  ID3_FIELD_TYPE_LATIN1,
  ID3_FIELD_TYPE_BINARYDATA
};

FIELDS(SIGN) = {
  ID3_FIELD_TYPE_INT8,
  ID3_FIELD_TYPE_BINARYDATA
};

FIELDS(SEEK) = {
  ID3_FIELD_TYPE_INT32
};

FIELDS(ASPI) = {
  ID3_FIELD_TYPE_INT32,
  ID3_FIELD_TYPE_INT32,
  ID3_FIELD_TYPE_INT16,
  ID3_FIELD_TYPE_INT8,
  ID3_FIELD_TYPE_BINARYDATA
};

FIELDS(text) = {
  ID3_FIELD_TYPE_TEXTENCODING,
  ID3_FIELD_TYPE_STRINGLIST
};

FIELDS(url) = {
  ID3_FIELD_TYPE_LATIN1
};

FIELDS(unknown) = {
  ID3_FIELD_TYPE_BINARYDATA
};

FIELDS(ZOBS) = {
  ID3_FIELD_TYPE_FRAMEID,
  ID3_FIELD_TYPE_BINARYDATA
};

# define FRAME(id)  \
  sizeof(fields_##id) / sizeof(fields_##id[0]), fields_##id

# define PRESERVE  0
# define DISCARD   ID3_FRAME_FLAG_FILEALTERPRESERVATION
# define OBSOLETE  (DISCARD | ID3_FRAME_FLAG_TAGALTERPRESERVATION)

# define FRAMETYPE(type, id, flags, desc)  \
  struct id3_frametype const id3_frametype_##type = {  \
    0, FRAME(id), flags, desc  \
  }

/* static frame types */

FRAMETYPE(text,         text,    PRESERVE, "Unknown text information frame");
FRAMETYPE(url,          url,     PRESERVE, "Unknown URL link frame");
FRAMETYPE(experimental, unknown, PRESERVE, "Experimental frame");
FRAMETYPE(unknown,      unknown, PRESERVE, "Unknown frame");
FRAMETYPE(obsolete,     unknown, OBSOLETE, "Obsolete frame");

#define TOTAL_KEYWORDS 87
#define MIN_WORD_LENGTH 4
#define MAX_WORD_LENGTH 4
#define MIN_HASH_VALUE 7
#define MAX_HASH_VALUE 177
/* maximum key range = 171, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
hash (register const char *str, register size_t len)
{
  static const unsigned char asso_values[] =
    {
      178, 178, 178, 178, 178, 178, 178, 178, 178, 178,
      178, 178, 178, 178, 178, 178, 178, 178, 178, 178,
      178, 178, 178, 178, 178, 178, 178, 178, 178, 178,
      178, 178, 178, 178, 178, 178, 178, 178, 178, 178,
      178, 178, 178, 178, 178, 178, 178, 178, 178, 178,
       69,  43,  13,  24, 178, 178, 178, 178, 178, 178,
      178, 178, 178, 178, 178,  31,  53,   3,  15,   3,
       24,  25,  10,  52,  74,   4,  23,  30,   1,   5,
       10,  62,  20,   0,  28,  28,   3,  19,  29,  62,
       10, 178, 178, 178, 178, 178, 178, 178, 178, 178,
      178, 178, 178, 178, 178, 178, 178, 178, 178, 178,
      178, 178, 178, 178, 178, 178, 178, 178, 178, 178,
      178, 178, 178, 178, 178, 178, 178, 178, 178, 178,
      178, 178, 178, 178, 178, 178, 178, 178, 178, 178,
      178, 178, 178, 178, 178, 178, 178, 178, 178, 178,
      178, 178, 178, 178, 178, 178, 178, 178, 178, 178,
      178, 178, 178, 178, 178, 178, 178, 178, 178, 178,
      178, 178, 178, 178, 178, 178, 178, 178, 178, 178,
      178, 178, 178, 178, 178, 178, 178, 178, 178, 178,
      178, 178, 178, 178, 178, 178, 178, 178, 178, 178,
      178, 178, 178, 178, 178, 178, 178, 178, 178, 178,
      178, 178, 178, 178, 178, 178, 178, 178, 178, 178,
      178, 178, 178, 178, 178, 178, 178, 178, 178, 178,
      178, 178, 178, 178, 178, 178, 178, 178, 178, 178,
      178, 178, 178, 178, 178, 178, 178, 178, 178, 178,
      178, 178, 178, 178, 178, 178, 178
    };
  return asso_values[(unsigned char)str[3]+1] + asso_values[(unsigned char)str[2]] + asso_values[(unsigned char)str[1]] + asso_values[(unsigned char)str[0]];
}

const struct id3_frametype *
id3_frametype_lookup (register const char *str, register size_t len)
{
  static const struct id3_frametype wordlist[] =
    {
#line 277 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"ENCR", FRAME(ENCR), PRESERVE, "Encryption method registration"},
#line 290 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"POPM", FRAME(POPM), PRESERVE, "Popularimeter"},
#line 349 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"WCOM", FRAME(url),  PRESERVE, "Commercial information"},
#line 296 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"SEEK", FRAME(SEEK), DISCARD,  "Seek frame"},
#line 347 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"USER", FRAME(USER), PRESERVE, "Terms of use"},
#line 287 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"MVNM", FRAME(text), PRESERVE, "Movement Name"},
#line 280 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"GEOB", FRAME(GEOB), PRESERVE, "General encapsulated object"},
#line 302 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"TCOM", FRAME(text), PRESERVE, "Composer"},
#line 276 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"COMR", FRAME(COMR), PRESERVE, "Commercial frame"},
#line 275 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"COMM", FRAME(COMM), PRESERVE, "Comments"},
#line 303 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"TCON", FRAME(text), PRESERVE, "Content type"},
#line 289 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"PCNT", FRAME(PCNT), PRESERVE, "Play counter"},
#line 291 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"POSS", FRAME(POSS), DISCARD,  "Position synchronisation frame"},
#line 279 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"ETCO", FRAME(ETCO), DISCARD,  "Event timing codes"},
#line 318 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"TKEY", FRAME(text), PRESERVE, "Initial key"},
#line 295 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"RVRB", FRAME(RVRB), PRESERVE, "Reverb"},
#line 311 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"TENC", FRAME(text), DISCARD,  "Encoded by"},
#line 307 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"TDOR", FRAME(text), PRESERVE, "Original release time"},
#line 288 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"OWNE", FRAME(OWNE), PRESERVE, "Ownership frame"},
#line 272 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"AENC", FRAME(AENC), DISCARD,  "Audio encryption"},
#line 305 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"TDEN", FRAME(text), PRESERVE, "Encoding time"},
#line 343 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"TSSE", FRAME(text), PRESERVE, "Software/hardware and settings used for encoding"},
#line 337 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"TRSN", FRAME(text), PRESERVE, "Internet radio station name"},
#line 331 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"TPE3", FRAME(text), PRESERVE, "Conductor/performer refinement"},
#line 352 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"WOAR", FRAME(url),  PRESERVE, "Official artist/performer webpage"},
#line 344 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"TSST", FRAME(text), PRESERVE, "Set subtitle"},
#line 328 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"TOWN", FRAME(text), PRESERVE, "File owner/licensee"},
#line 338 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"TRSO", FRAME(text), PRESERVE, "Internet radio station owner"},
#line 320 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"TLEN", FRAME(text), DISCARD,  "Length"},
#line 356 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"WPUB", FRAME(url),  PRESERVE, "Publishers official webpage"},
#line 341 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"TSOT", FRAME(text), PRESERVE, "Title sort order"},
#line 325 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"TOFN", FRAME(text), PRESERVE, "Original filename"},
#line 342 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"TSRC", FRAME(text), PRESERVE, "ISRC (international standard recording code)"},
#line 322 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"TMED", FRAME(text), PRESERVE, "Media type"},
#line 332 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"TPE4", FRAME(text), PRESERVE, "Interpreted, remixed, or otherwise modified by"},
#line 326 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"TOLY", FRAME(text), PRESERVE, "Original lyricist(s)/text writer(s)"},
#line 327 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"TOPE", FRAME(text), PRESERVE, "Original artist(s)/performer(s)"},
#line 334 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"TPRO", FRAME(text), PRESERVE, "Produced notice"},
#line 335 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"TPUB", FRAME(text), PRESERVE, "Publisher"},
#line 355 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"WPAY", FRAME(url),  PRESERVE, "Payment"},
#line 333 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"TPOS", FRAME(text), PRESERVE, "Part of a set"},
#line 354 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"WORS", FRAME(url),  PRESERVE, "Official Internet radio station homepage"},
#line 323 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"TMOO", FRAME(text), PRESERVE, "Mood"},
#line 336 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"TRCK", FRAME(text), PRESERVE, "Track number/position in set"},
#line 306 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"TDLY", FRAME(text), PRESERVE, "Playlist delay"},
#line 308 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"TDRC", FRAME(text), PRESERVE, "Recording time"},
#line 348 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"USLT", FRAME(USLT), PRESERVE, "Unsynchronised lyric/text transcription"},
#line 351 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"WOAF", FRAME(url),  PRESERVE, "Official audio file webpage"},
#line 310 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"TDTG", FRAME(text), PRESERVE, "Tagging time"},
#line 297 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"SIGN", FRAME(SIGN), PRESERVE, "Signature frame"},
#line 353 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"WOAS", FRAME(url),  PRESERVE, "Official audio source webpage"},
#line 330 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"TPE2", FRAME(text), PRESERVE, "Band/orchestra/accompaniment"},
#line 300 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"TALB", FRAME(text), PRESERVE, "Album/movie/show title"},
#line 339 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"TSOA", FRAME(text), PRESERVE, "Album sort order"},
#line 319 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"TLAN", FRAME(text), PRESERVE, "Language(s)"},
#line 312 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"TEXT", FRAME(text), PRESERVE, "Lyricist/text writer"},
#line 350 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"WCOP", FRAME(url),  PRESERVE, "Copyright/legal information"},
#line 286 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"MVIN", FRAME(text), PRESERVE, "Movement Number/Movement Count"},
#line 321 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"TMCL", FRAME(text), PRESERVE, "Musician credits list"},
#line 301 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"TBPM", FRAME(text), PRESERVE, "BPM (beats per minute)"},
#line 309 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"TDRL", FRAME(text), PRESERVE, "Release time"},
#line 324 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"TOAL", FRAME(text), PRESERVE, "Original album/movie/show title"},
#line 340 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"TSOP", FRAME(text), PRESERVE, "Performer sort order"},
#line 361 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"ZOBS", FRAME(ZOBS), OBSOLETE, "Obsolete frame"},
#line 294 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"RVA2", FRAME(RVA2), DISCARD,  "Relative volume adjustment (2)"},
#line 304 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"TCOP", FRAME(text), PRESERVE, "Copyright message"},
#line 283 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"LINK", FRAME(LINK), PRESERVE, "Linked information"},
#line 281 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"GRID", FRAME(GRID), PRESERVE, "Group identification registration"},
#line 292 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"PRIV", FRAME(PRIV), PRESERVE, "Private frame"},
#line 313 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"TFLT", FRAME(text), PRESERVE, "File type"},
#line 285 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"MLLT", FRAME(MLLT), DISCARD,  "MPEG location lookup table"},
#line 299 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"SYTC", FRAME(SYTC), DISCARD,  "Synchronised tempo codes"},
#line 346 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"UFID", FRAME(UFID), PRESERVE, "Unique file identifier"},
#line 273 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"APIC", FRAME(APIC), PRESERVE, "Attached picture"},
#line 329 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"TPE1", FRAME(text), PRESERVE, "Lead performer(s)/soloist(s)"},
#line 298 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"SYLT", FRAME(SYLT), DISCARD,  "Synchronised lyric/text"},
#line 274 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"ASPI", FRAME(ASPI), DISCARD,  "Audio seek point index"},
#line 314 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"TIPL", FRAME(text), PRESERVE, "Involved people list"},
#line 317 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"TIT3", FRAME(text), PRESERVE, "Subtitle/description refinement"},
#line 284 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"MCDI", FRAME(MCDI), PRESERVE, "Music CD identifier"},
#line 282 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"GRP1", FRAME(text), PRESERVE, "Grouping"},
#line 293 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"RBUF", FRAME(RBUF), PRESERVE, "Recommended buffer size"},
#line 278 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"EQU2", FRAME(EQU2), DISCARD,  "Equalisation (2)"},
#line 357 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"WXXX", FRAME(WXXX), PRESERVE, "User defined URL link frame"},
#line 345 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"TXXX", FRAME(TXXX), PRESERVE, "User defined text information frame"},
#line 316 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"TIT2", FRAME(text), PRESERVE, "Title/songname/content description"},
#line 315 "/home/bll/s/bdj4/packages/libid3tag-0.16.4/frametype.gperf"
      {"TIT1", FRAME(text), PRESERVE, "Work name"}
    };

  static const signed char lookup[] =
    {
      -1, -1, -1, -1, -1, -1, -1,  0, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,  1, -1,
       2,  3, -1,  4, -1, -1, -1,  5,  6,  7,  8,  9, -1, 10,
      11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24,
      25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38,
      39, 40, 41, 42, 43, -1, 44, -1, 45, 46, 47, 48, 49, 50,
      51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64,
      65, 66, 67, 68, -1, 69, 70, 71, -1, 72, 73, -1, 74, -1,
      -1, 75, -1, 76, -1, -1, -1, -1, 77, 78, 79, -1, 80, -1,
      81, -1, -1, -1, -1, -1, -1, -1, -1, -1, 82, -1, -1, 83,
      -1, -1, -1, -1, -1, -1, -1, -1, 84, -1, -1, 85, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, 86
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = wordlist[index].id;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &wordlist[index];
            }
        }
    }
  return 0;
}
