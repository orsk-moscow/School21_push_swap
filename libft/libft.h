/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: u18188899 <u18188899@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 20:49:11 by klekisha          #+#    #+#             */
/*   Updated: 2020/02/25 21:26:05 by u18188899        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>

typedef struct						s_list
{
	void							*content;
	size_t							content_size;
	struct s_list					*next;
}									t_list;

int									ft_atoi(const char *str);
// NAME
//      atoi, atoi_l -- convert ASCII string to integer

// LIBRARY
//      Standard C Library (libc, -lc)

// SYNOPSIS
//      #include <stdlib.h>

//      int
//      atoi(const char *str);

//      #include <xlocale.h>

//      int
//      atoi_l(const char *str, locale_t loc);

// DESCRIPTION
//      The atoi() function converts the initial portion of the string pointed to
//      by str to int representation.

//      It is equivalent to:

//            (int)strtol(str, (char **)NULL, 10);

//      While the atoi() function uses the current locale, the atoi_l() function
//      may be passed a locale directly. See xlocale(3) for more information.

// IMPLEMENTATION NOTES
//      The atoi() and atoi_l() functions are thread-safe and async-cancel-safe.

//      The strtol() and strtol_l() functions are recommended instead of atoi() and
//      atoi_l() functions, especially in new code.

// ERRORS
//      The function atoi() need not affect the value of errno on an error.

// SEE ALSO
//      atof(3), atol(3), strtod(3), strtol(3), strtoul(3), xlocale(3)

// STANDARDS
//      The atoi() function conforms to ISO/IEC 9945-1:1990 (``POSIX.1''), ISO/IEC
//      9899:1990 (ISO C90), and ISO/IEC 9899:1999 (ISO C99).

// BSD                              June 4, 1993                              BSD
void								ft_bzero(void *s, size_t n);
// NAME
//      bzero -- write zeroes to a byte string

// LIBRARY
//      Standard C Library (libc, -lc)

// SYNOPSIS
//      #include <strings.h>

//      void
//      bzero(void *s, size_t n);

// DESCRIPTION
//      The bzero() function writes n zeroed bytes to the string s.  If n is zero,
//      bzero() does nothing.

// SEE ALSO
//      memset(3), swab(3)

// HISTORY
//      A bzero() function appeared in 4.3BSD.  Its prototype existed previously in
//      <string.h> before it was moved to <strings.h> for IEEE Std 1003.1-2001
//      (``POSIX.1'') compliance.

//      bzero() was deprecated in IEEE Std 1003.1-2001 (``POSIX.1'') and removed in
//      IEEE Std 1003.1-2008 (``POSIX.1'').

int									ft_isalnum(int c);

// NAME
//      isalnum -- alphanumeric character test

// LIBRARY
//      Standard C Library (libc, -lc)

// SYNOPSIS
//      #include <ctype.h>

//      int
//      isalnum(int c);

// DESCRIPTION
//      The isalnum() function tests for any character for which isalpha(3) or
//      isdigit(3) is true.  The value of the argument must be representable as an
//      unsigned char or the value of EOF.

//      In the ASCII character set, this includes the following characters (pre-
//      ceded by their numeric values, in octal):

//      060 ``0''     061 ``1''     062 ``2''     063 ``3''     064 ``4''
//      065 ``5''     066 ``6''     067 ``7''     070 ``8''     071 ``9''
//      101 ``A''     102 ``B''     103 ``C''     104 ``D''     105 ``E''
//      106 ``F''     107 ``G''     110 ``H''     111 ``I''     112 ``J''
//      113 ``K''     114 ``L''     115 ``M''     116 ``N''     117 ``O''
//      120 ``P''     121 ``Q''     122 ``R''     123 ``S''     124 ``T''
//      125 ``U''     126 ``V''     127 ``W''     130 ``X''     131 ``Y''
//      132 ``Z''     141 ``a''     142 ``b''     143 ``c''     144 ``d''
//      145 ``e''     146 ``f''     147 ``g''     150 ``h''     151 ``i''
//      152 ``j''     153 ``k''     154 ``l''     155 ``m''     156 ``n''
//      157 ``o''     160 ``p''     161 ``q''     162 ``r''     163 ``s''
//      164 ``t''     165 ``u''     166 ``v''     167 ``w''     170 ``x''
//      171 ``y''     172 ``z''

// RETURN VALUES
//      The isalnum() function returns zero if the character tests false and
//      returns non-zero if the character tests true.

// COMPATIBILITY
//      The 4.4BSD extension of accepting arguments outside of the range of the
//      unsigned char type in locales with large character sets is considered obso-
//      lete and may not be supported in future releases.  The iswalnum() function
//      should be used instead.

// SEE ALSO
//      ctype(3), isalnum_l(3), isalpha(3), isdigit(3), iswalnum(3), ascii(7)

// STANDARDS
//      The isalnum() function conforms to ISO/IEC 9899:1990 (``ISO C90'').

// BSD                              July 17, 2005                             BSD

int									ft_isalpha(int c);

// NAME
//      isalpha -- alphabetic character test

// LIBRARY
//      Standard C Library (libc, -lc)

// SYNOPSIS
//      #include <ctype.h>

//      int
//      isalpha(int c);

// DESCRIPTION
//      The isalpha() function tests for any character for which isupper(3) or
//      islower(3) is true.  The value of the argument must be representable as an
//      unsigned char or the value of EOF.

//      In the ASCII character set, this includes the following characters (pre-
//      ceded by their numeric values, in octal):

//      101 ``A''     102 ``B''     103 ``C''     104 ``D''     105 ``E''
//      106 ``F''     107 ``G''     110 ``H''     111 ``I''     112 ``J''
//      113 ``K''     114 ``L''     115 ``M''     116 ``N''     117 ``O''
//      120 ``P''     121 ``Q''     122 ``R''     123 ``S''     124 ``T''
//      125 ``U''     126 ``V''     127 ``W''     130 ``X''     131 ``Y''
//      132 ``Z''     141 ``a''     142 ``b''     143 ``c''     144 ``d''
//      145 ``e''     146 ``f''     147 ``g''     150 ``h''     151 ``i''
//      152 ``j''     153 ``k''     154 ``l''     155 ``m''     156 ``n''
//      157 ``o''     160 ``p''     161 ``q''     162 ``r''     163 ``s''
//      164 ``t''     165 ``u''     166 ``v''     167 ``w''     170 ``x''
//      171 ``y''     172 ``z''

// RETURN VALUES
//      The isalpha() function returns zero if the character tests false and
//      returns non-zero if the character tests true.

// COMPATIBILITY
//      The 4.4BSD extension of accepting arguments outside of the range of the
//      unsigned char type in locales with large character sets is considered obso-
//      lete and may not be supported in future releases.  The iswalpha() function
//      should be used instead.

// SEE ALSO
//      ctype(3), isalnum_l(3), islower(3), isupper(3), iswalpha(3), ascii(7)

// STANDARDS
//      The isalpha() function conforms to ISO/IEC 9899:1990 (``ISO C90'').

// BSD                              July 17, 2005                             BSD

char								*ft_strjoin(char const *s1,
char const *s2);
char								*ft_strnjoin(char const *s1,
char const *s2, size_t n);

// Description Allocates (with malloc(3)) and returns a “fresh” string ending with ’\0’, result of the concatenation of s1 and s2. If
// the allocation fails the function returns NULL.
// Param. #1 The prefix string.
// Param. #2 The suffix string.
// Return value The “fresh” string result of the concatenation of the 2 strings.

int									ft_isascii(int c);

// NAME
//      isascii -- test for ASCII character

// LIBRARY
//      Standard C Library (libc, -lc)

// SYNOPSIS
//      #include <ctype.h>

//      int
//      isascii(int c);

// DESCRIPTION
//      The isascii() function tests for an ASCII character, which is any character
//      between 0 and octal 0177 inclusive.

// SEE ALSO
//      ctype(3), iswascii(3), ascii(7)

// BSD                             October 6, 2002                            BSD
// (END)

int									ft_isdigit(int c);

// NAME
//      isdigit, isnumber -- decimal-digit character test

// LIBRARY
//      Standard C Library (libc, -lc)

// SYNOPSIS
//      #include <ctype.h>

//      int
//      isdigit(int c);

//      int
//      isnumber(int c);

// DESCRIPTION
//      The isdigit() function tests for a decimal digit character.  Regardless of
//      locale, this includes the following characters only:

//      ``0''         ``1''         ``2''         ``3''         ``4''
//      ``5''         ``6''         ``7''         ``8''         ``9''

//      The isnumber() function behaves similarly to isdigit(), but may recognize
//      additional characters, depending on the current locale setting.

//      The value of the argument must be representable as an unsigned char or the
//      value of EOF.

// RETURN VALUES
//      The isdigit() and isnumber() functions return zero if the character tests
//      false and return non-zero if the character tests true.

// COMPATIBILITY
//      The 4.4BSD extension of accepting arguments outside of the range of the
//      unsigned char type in locales with large character sets is considered obso-
//      lete and may not be supported in future releases.  The iswdigit() function
//      should be used instead.

// SEE ALSO
//      ctype(3), isalnum_l(3), iswdigit(3), multibyte(3), ascii(7)

// STANDARDS
//      The isdigit() function conforms to ISO/IEC 9899:1990 (``ISO C90'').

// HISTORY
//      The isnumber() function appeared in 4.4BSD.

// BSD                               May 4, 2007                              BSD
// (END)
int									ft_isprint(int c);

// NAME
//      isprint -- printing character test (space character inclusive)

// LIBRARY
//      Standard C Library (libc, -lc)

// SYNOPSIS
//      #include <ctype.h>

//      int
//      isprint(int c);

// DESCRIPTION
//      The isprint() function tests for any printing character, including space
//      (` ').  The value of the argument must be representable as an unsigned char
//      or the value of EOF.

//      In the ASCII character set, this includes the following characters (pre-
//      ceded by their numeric values, in octal):

//      040 sp        041 ``!''     042 ``"''     043 ``#''     044 ``$''
//      045 ``%''     046 ``&''     047 ``'''     050 ``(''     051 ``)''
//      052 ``*''     053 ``+''     054 ``,''     055 ``-''     056 ``.''
//      057 ``/''     060 ``0''     061 ``1''     062 ``2''     063 ``3''
//      064 ``4''     065 ``5''     066 ``6''     067 ``7''     070 ``8''
//      071 ``9''     072 ``:''     073 ``;''     074 ``<''     075 ``=''
//      076 ``>''     077 ``?''     100 ``@''     101 ``A''     102 ``B''
//      103 ``C''     104 ``D''     105 ``E''     106 ``F''     107 ``G''
//      110 ``H''     111 ``I''     112 ``J''     113 ``K''     114 ``L''
//      115 ``M''     116 ``N''     117 ``O''     120 ``P''     121 ``Q''
//      122 ``R''     123 ``S''     124 ``T''     125 ``U''     126 ``V''
//      127 ``W''     130 ``X''     131 ``Y''     132 ``Z''     133 ``[''
//      134 ``\''     135 ``]''     136 ``^''     137 ``_''     140 ```''
//      141 ``a''     142 ``b''     143 ``c''     144 ``d''     145 ``e''
//      146 ``f''     147 ``g''     150 ``h''     151 ``i''     152 ``j''
//      153 ``k''     154 ``l''     155 ``m''     156 ``n''     157 ``o''
//      160 ``p''     161 ``q''     162 ``r''     163 ``s''     164 ``t''
//      165 ``u''     166 ``v''     167 ``w''     170 ``x''     171 ``y''
//      172 ``z''     173 ``{''     174 ``|''     175 ``}''     176 ``~''

// RETURN VALUES
//      The isprint() function returns zero if the character tests false and
//      returns non-zero if the character tests true.

// COMPATIBILITY
//      The 4.4BSD extension of accepting arguments outside of the range of the
//      unsigned char type in locales with large character sets is considered obso-
//      lete and may not be supported in future releases.  The iswprint() function
//      should be used instead.

// SEE ALSO
//      ctype(3), isalnum_l(3), iswprint(3), ascii(7)

// STANDARDS
//      The isprint() function conforms to ISO/IEC 9899:1990 (``ISO C90'').

// BSD                              July 17, 2005                             BSD

int									ft_isspace(int c);

// ISSPACE(3)               BSD Library Functions Manual               ISSPACE(3)

// NAME
//      isspace -- white-space character test

// LIBRARY
//      Standard C Library (libc, -lc)

// SYNOPSIS
//      #include <ctype.h>

//      int
//      isspace(int c);

// DESCRIPTION
//      The isspace() function tests for the white-space characters.  For any
//      locale, this includes the following standard characters:

//      ``\t''   ``\n''    ``\v''    ``\f''    ``\r''    `` ''

//      In the "C" locale, isspace() successful test is limited to these characters
//      only.  The value of the argument must be representable as an unsigned char
//      or the value of EOF.

// RETURN VALUES
//      The isspace() function returns zero if the character tests false and
//      returns non-zero if the character tests true.

// COMPATIBILITY
//      The 4.4BSD extension of accepting arguments outside of the range of the
//      unsigned char type in locales with large character sets is considered obso-
//      lete and may not be supported in future releases.  The iswspace() function
//      should be used instead.

// SEE ALSO
//      ctype(3), isalnum_l(3), iswspace(3), multibyte(3), ascii(7)

// STANDARDS
//      The isspace() function conforms to ISO/IEC 9899:1990 (``ISO C90'').

// BSD                              July 17, 2005                             BSD

void								*ft_memccpy(void *dst, const void
*src, int c, size_t n);

// NAME
//      memccpy -- copy string until character found

// LIBRARY
//      Standard C Library (libc, -lc)

// SYNOPSIS
//      #include <string.h>

//      void *
//      memccpy(void *restrict dst, const void *restrict src, int c, size_t n);

// DESCRIPTION
//      The memccpy() function copies bytes from string src to string dst.  If the
//      character c (as converted to an unsigned char) occurs in the string src,
//      the copy stops and a pointer to the byte after the copy of c in the string
//      dst is returned.  Otherwise, n bytes are copied, and a NULL pointer is
//      returned.

//      The source and destination strings should not overlap, as the behavior is
//      undefined.

// SEE ALSO
//      bcopy(3), memcpy(3), memmove(3), strcpy(3)

// HISTORY
//      The memccpy() function first appeared in 4.4BSD.

void								*ft_memchr(const void *s, int c, size_t n);

// NAME
//      memchr -- locate byte in byte string

// LIBRARY
//      Standard C Library (libc, -lc)

// SYNOPSIS
//      #include <string.h>

//      void *
//      memchr(const void *s, int c, size_t n);

// DESCRIPTION
//      The memchr() function locates the first occurrence of c (converted to an
//      unsigned char) in string s.

// RETURN VALUES
//      The memchr() function returns a pointer to the byte located, or NULL if no
//      such byte exists within n bytes.

// SEE ALSO
//      strchr(3), strcspn(3), strpbrk(3), strrchr(3), strsep(3), strspn(3),
//      strstr(3), strtok(3), wmemchr(3)

// STANDARDS
//      The memchr() function conforms to ISO/IEC 9899:1990 (``ISO C90'').

// BSD                              April 9, 2008                             BSD

int									ft_memcmp(const void *s1, const void *s2,
size_t n);

// MEMCMP(3)                BSD Library Functions Manual                MEMCMP(3)

// NAME
//      memcmp -- compare byte string

// LIBRARY
//      Standard C Library (libc, -lc)

// SYNOPSIS
//      #include <string.h>

//      int
//      memcmp(const void *s1, const void *s2, size_t n);

// DESCRIPTION
//      The memcmp() function compares byte string s1 against byte string s2.  Both
//      strings are assumed to be n bytes long.

// RETURN VALUES
//      The memcmp() function returns zero if the two strings are identical, other-
//      wise returns the difference between the first two differing bytes (treated
//      as unsigned char values, so that `\200' is greater than `\0', for example).
//      Zero-length strings are always identical.  This behavior is not required by
//      C and portable code should only depend on the sign of the returned value.

// SEE ALSO
//      bcmp(3), strcasecmp(3), strcmp(3), strcoll(3), strxfrm(3), wmemcmp(3)

// STANDARDS
//      The memcmp() function conforms to ISO/IEC 9899:1990 (``ISO C90'').

// BSD                              June 4, 1993                              BSD
// (END)

void								*ft_memcpy(void *dst, const
void *src, size_t n);

// NAME
//      memcpy -- copy memory area

// LIBRARY
//      Standard C Library (libc, -lc)

// SYNOPSIS
//      #include <string.h>

//      void *
//      memcpy(void *restrict dst, const void *restrict src, size_t n);

// DESCRIPTION
//      The memcpy() function copies n bytes from memory area src to memory area
//      dst.  If dst and src overlap, behavior is undefined.  Applications in which
//      dst and src might overlap should use memmove(3) instead.

// RETURN VALUES
//      The memcpy() function returns the original value of dst.

// SEE ALSO
//      bcopy(3), memccpy(3), memmove(3), strcpy(3), wmemcpy(3)

// STANDARDS
//      The memcpy() function conforms to ISO/IEC 9899:1990 (``ISO C90'').

// BSD                              June 4, 1993                              BSD

void								*ft_memmove(void *dst, const void *src,
size_t len);

// NAME
//      memmove -- copy byte string

// LIBRARY
//      Standard C Library (libc, -lc)

// SYNOPSIS
//      #include <string.h>

//      void *
//      memmove(void *dst, const void *src, size_t len);

// DESCRIPTION
//      The memmove() function copies len bytes from string src to string dst.  The
//      two strings may overlap; the copy is always done in a non-destructive man-
//      ner.

// RETURN VALUES
//      The memmove() function returns the original value of dst.

// SEE ALSO
//      bcopy(3), memccpy(3), memcpy(3), strcpy(3), wmemmove(3)

// STANDARDS
//      The memmove() function conforms to ISO/IEC 9899:1990 (``ISO C90'').

// BSD                              June 4, 1993                              BSD

void								*ft_memset(void *b, int c, size_t len);

// NAME
//      memset -- fill a byte string with a byte value

// LIBRARY
//      Standard C Library (libc, -lc)

// SYNOPSIS
//      #include <string.h>

//      void *
//      memset(void *b, int c, size_t len);

// DESCRIPTION
//      The memset() function writes len bytes of value c (converted to an unsigned
//      char) to the string b.

// RETURN VALUES
//      The memset() function returns its first argument.

// SEE ALSO
//      bzero(3), memset_pattern(3), memset_s.3, swab(3), wmemset(3)

// STANDARDS
//      The memset() function conforms to ISO/IEC 9899:1990 (``ISO C90'').

// BSD                              June 4, 1993                              BSD

char								*ft_strcat(char *s1, const
char *s2);
char								*ft_strncat(char *s1, const
char *s2, size_t n);

// NAME
//      strcat, strncat -- concatenate strings

// LIBRARY
//      Standard C Library (libc, -lc)

// SYNOPSIS
//      #include <string.h>

//      char *
//      strcat(char *restrict s1, const char *restrict s2);

//      char *
//      strncat(char *restrict s1, const char *restrict s2, size_t n);

// DESCRIPTION
//      The strcat() and strncat() functions append a copy of the null-terminated
//      string s2 to the end of the null-terminated string s1, then add a terminat-
//      ing `\0'.  The string s1 must have sufficient space to hold the result.

//      The strncat() function appends not more than n characters from s2, and then
//      adds a terminating `\0'.

//      The source and destination strings should not overlap, as the behavior is
//      undefined.

// RETURN VALUES
//      The strcat() and strncat() functions return the pointer s1.

// SECURITY CONSIDERATIONS
//      The strcat() function is easily misused in a manner which enables malicious
//      users to arbitrarily change a running program's functionality through a
//      buffer overflow attack.  (See the FSA.)

//      Avoid using strcat().  Instead, use strncat() or strlcat() and ensure that
//      no more characters are copied to the destination buffer than it can hold.

//      Note that strncat() can also be problematic.  It may be a security concern
//      for a string to be truncated at all.  Since the truncated string will not
//      be as long as the original, it may refer to a completely different resource
//      and usage of the truncated resource could result in very incorrect behav-
//      ior.  Example:

//      void
//      foo(const char *arbitrary_string)
//      {
//              char onstack[8] = "";

//      #if defined(BAD)
//              /*
//               * This first strcat is bad behavior.  Do not use strcat!
//               */
//              (void)strcat(onstack, arbitrary_string);        /* BAD! */
//      #elif defined(BETTER)
//              /*
//               * The following two lines demonstrate better use of
//               * strncat().
//               */
//              (void)strncat(onstack, arbitrary_string,
//                  sizeof(onstack) - strlen(onstack) - 1);
//      #elif defined(BEST)
//              /*
//               * These lines are even more robust due to testing for
//               * truncation.
//               */
//              if (strlen(arbitrary_string) + 1 >
//                  sizeof(onstack) - strlen(onstack))
//                      err(1, "onstack would be truncated");
//              (void)strncat(onstack, arbitrary_string,
//                  sizeof(onstack) - strlen(onstack) - 1);
//      #endif
//      }

// SEE ALSO
//      bcopy(3), memccpy(3), memcpy(3), memmove(3), strcpy(3), strlcat(3),
//      strlcpy(3), wcscat(3)

// STANDARDS
//      The strcat() and strncat() functions conform to ISO/IEC 9899:1990
//      (``ISO C90'').

// BSD                            December 1, 2009                            BSD
// (END)




int									ft_strcmp(const char *s1, const char *s2);
int									ft_strncmp(const char *s1, const
char *s2, size_t n);

// NAME
//      strcmp, strncmp -- compare strings

// LIBRARY
//      Standard C Library (libc, -lc)

// SYNOPSIS
//      #include <string.h>

//      int
//      strcmp(const char *s1, const char *s2);

//      int
//      strncmp(const char *s1, const char *s2, size_t n);

// DESCRIPTION
//      The strcmp() and strncmp() functions lexicographically compare the null-
//      terminated strings s1 and s2.

//      The strncmp() function compares not more than n characters.  Because
//      strncmp() is designed for comparing strings rather than binary data, char-
//      acters that appear after a `\0' character are not compared.

// RETURN VALUES
//      The strcmp() and strncmp() functions return an integer greater than, equal
//      to, or less than 0, according as the string s1 is greater than, equal to,
//      or less than the string s2.  The comparison is done using unsigned charac-
//      ters, so that `\200' is greater than `\0'.

// SEE ALSO
//      bcmp(3), memcmp(3), strcasecmp(3), strcoll(3), strxfrm(3), wcscmp(3)

// STANDARDS
//      The strcmp() and strncmp() functions conform to ISO/IEC 9899:1990
//      (``ISO C90'').

// BSD                            October 11, 2001                            BSD

char								*ft_strdup(const char *s1);

// NAME
//      strdup, strndup -- save a copy of a string

// LIBRARY
//      Standard C Library (libc, -lc)

// SYNOPSIS
//      #include <string.h>

//      char *
//      strdup(const char *s1);

//      char *
//      strndup(const char *s1, size_t n);

// DESCRIPTION
//      The strdup() function allocates sufficient memory for a copy of the string
//      s1, does the copy, and returns a pointer to it.  The pointer may subse-
//      quently be used as an argument to the function free(3).

//      If insufficient memory is available, NULL is returned and errno is set to
//      ENOMEM.

//      The strndup() function copies at most n characters from the string s1
//      always NUL terminating the copied string.

// SEE ALSO
//      free(3), malloc(3)

// HISTORY
//      The strdup() function first appeared in 4.4BSD.  The strndup() function was
//      added in FreeBSD 7.2.

// BSD                            December 5, 2008                            BSD

size_t								ft_strlcat(char *dst, const char
*src, size_t size);

// NAME
//      strlcpy, strlcat -- size-bounded string copying and concatenation

// LIBRARY
//      Standard C Library (libc, -lc)

// SYNOPSIS
//      #include <string.h>

//      size_t
//      strlcpy(char * restrict dst, const char * restrict src, size_t size);

//      size_t
//      strlcat(char * restrict dst, const char * restrict src, size_t size);

// DESCRIPTION
//      The strlcpy() and strlcat() functions copy and concatenate strings respec-
//      tively.  They are designed to be safer, more consistent, and less error
//      prone replacements for strncpy(3) and strncat(3).  Unlike those functions,
//      strlcpy() and strlcat() take the full size of the buffer (not just the
//      length) and guarantee to NUL-terminate the result (as long as size is
//      larger than 0 or, in the case of strlcat(), as long as there is at least
//      one byte free in dst).  Note that a byte for the NUL should be included in
//      size.  Also note that strlcpy() and strlcat() only operate on true ``C''
//      strings.  This means that for strlcpy() src must be NUL-terminated and for
//      strlcat() both src and dst must be NUL-terminated.

//      The strlcpy() function copies up to size - 1 characters from the NUL-termi-
//      nated string src to dst, NUL-terminating the result.

//      The strlcat() function appends the NUL-terminated string src to the end of
//      dst.  It will append at most size - strlen(dst) - 1 bytes, NUL-terminating
//      the result.

//      The source and destination strings should not overlap, as the behavior is
//      undefined.

// RETURN VALUES
//      The strlcpy() and strlcat() functions return the total length of the string
//      they tried to create.  For strlcpy() that means the length of src.  For
//      strlcat() that means the initial length of dst plus the length of src.
//      While this may seem somewhat confusing, it was done to make truncation
//      detection simple.

//      Note however, that if strlcat() traverses size characters without finding a
//      NUL, the length of the string is considered to be size and the destination
//      string will not be NUL-terminated (since there was no space for the NUL).
//      This keeps strlcat() from running off the end of a string.  In practice
//      this should not happen (as it means that either size is incorrect or that
//      dst is not a proper ``C'' string).  The check exists to prevent potential
//      security problems in incorrect code.

// EXAMPLES
//      The following code fragment illustrates the simple case:

//            char *s, *p, buf[BUFSIZ];

//            ...

//            (void)strlcpy(buf, s, sizeof(buf));
//            (void)strlcat(buf, p, sizeof(buf));

//      To detect truncation, perhaps while building a pathname, something like the
//      following might be used:

//            char *dir, *file, pname[MAXPATHLEN];

//            ...

//            if (strlcpy(pname, dir, sizeof(pname)) >= sizeof(pname))
//                    goto toolong;
//            if (strlcat(pname, file, sizeof(pname)) >= sizeof(pname))
//                    goto toolong;

//      Since it is known how many characters were copied the first time, things
//      can be sped up a bit by using a copy instead of an append

//            char *dir, *file, pname[MAXPATHLEN];
//            size_t n;

//            ...

//            n = strlcpy(pname, dir, sizeof(pname));
//            if (n >= sizeof(pname))
//                    goto toolong;
//            if (strlcpy(pname + n, file, sizeof(pname) - n) >= sizeof(pname) - n)
//                    goto toolong;

//      However, one may question the validity of such optimizations, as they
//      defeat the whole purpose of strlcpy() and strlcat().  As a matter of fact,
//      the first version of this manual page got it wrong.

// SEE ALSO
//      snprintf(3), strncat(3), strncpy(3), wcslcpy(3)
// :
// HISTORY
//      The strlcpy() and strlcat() functions first appeared in OpenBSD 2.4, and
//      made their appearance in FreeBSD 3.3.

// BSD                              June 22, 1998                             BSD

size_t								ft_strlen(const char *s);

// NAME
//      strlen, strnlen -- find length of string

// LIBRARY
//      Standard C Library (libc, -lc)

// DESCRIPTION
//      The strlen() function computes the length of the string s.  The strnlen()
//      function attempts to compute the length of s, but never scans beyond the
//      first maxlen bytes of s.

// RETURN VALUES
//      The strlen() function returns the number of characters that precede the
//      terminating NUL character.  The strnlen() function returns either the same
//      result as strlen() or maxlen, whichever is smaller.

// SEE ALSO
//      string(3), wcslen(3), wcswidth(3)

// STANDARDS
//      The strlen() function conforms to ISO/IEC 9899:1990 (``ISO C90'').  The
//      strnlen() function conforms to IEEE Std 1003.1-2008 (``POSIX.1'').

// BSD                            February 28, 2009                           BSD

char								*ft_strcpy(char *dst, const char *src);
char								*ft_strncpy(char *dst, const
char *src, size_t len);

// NAME
//      stpcpy, stpncpy, strcpy, strncpy -- copy strings

// LIBRARY
//      Standard C Library (libc, -lc)

// SYNOPSIS
//      #include <string.h>

//      char *
//      stpcpy(char * dst, const char * src);

//      char *
//      stpncpy(char * dst, const char * src, size_t len);

//      char *
//      strcpy(char * dst, const char * src);

//      char *
//      strncpy(char * dst, const char * src, size_t len);

// DESCRIPTION
//      The stpcpy() and strcpy() functions copy the string src to dst (including
//      the terminating `\0' character.)

//      The stpncpy() and strncpy() functions copy at most len characters from src
//      into dst.  If src is less than len characters long, the remainder of dst is
//      filled with `\0' characters.  Otherwise, dst is not terminated.

//      The source and destination strings should not overlap, as the behavior is
//      undefined.

// RETURN VALUES
//      The strcpy() and strncpy() functions return dst.  The stpcpy() and
//      stpncpy() functions return a pointer to the terminating `\0' character of
//      dst.  If stpncpy() does not terminate dst with a NUL character, it instead
//      returns a pointer to dst[n] (which does not necessarily refer to a valid
//      memory location.)

// EXAMPLES
//      The following sets chararray to ``abc\0\0\0'':

//            char chararray[6];

//            (void)strncpy(chararray, "abc", sizeof(chararray));

//      The following sets chararray to ``abcdef'':

//            char chararray[6];

//            (void)strncpy(chararray, "abcdefgh", sizeof(chararray));

//      Note that it does not NUL terminate chararray because the length of the
//      source string is greater than or equal to the length argument.

//      The following copies as many characters from input to buf as will fit and
//      NUL terminates the result.  Because strncpy() does not guarantee to NUL
//      terminate the string itself, this must be done explicitly.

//            char buf[1024];

//            (void)strncpy(buf, input, sizeof(buf) - 1);
//            buf[sizeof(buf) - 1] = '\0';

//      This could be better achieved using strlcpy(3), as shown in the following
//      example:

//            (void)strlcpy(buf, input, sizeof(buf));

//      Note that because strlcpy(3) is not defined in any standards, it should
//      only be used when portability is not a concern.

// SEE ALSO
//      bcopy(3), memccpy(3), memcpy(3), memmove(3), strlcpy(3), wcscpy(3)

// STANDARDS
//      The strcpy() and strncpy() functions conform to ISO/IEC 9899:1990
//      (``ISO C90'').  The stpcpy() and stpncpy() functions conform to IEEE Std
//      1003.1-2008 (``POSIX.1'').

// HISTORY
//      The stpcpy() function first appeared in FreeBSD 4.4, and stpncpy() was
//      added in FreeBSD 8.0.

// SECURITY CONSIDERATIONS
//      The strcpy() function is easily misused in a manner which enables malicious
//      users to arbitrarily change a running program's functionality through a
//      buffer overflow attack.

// BSD                            February 28, 2009                           BSD
// (END)

char								*ft_strnstr(const char *haystack, const
char *needle, size_t len);

// NAME
//      strstr, strcasestr, strnstr -- locate a substring in a string

// LIBRARY
//      Standard C Library (libc, -lc)

// SYNOPSIS
//      #include <string.h>

//      char *
//      strstr(const char *haystack, const char *needle);

//      char *
//      strcasestr(const char *haystack, const char *needle);

//      char *
//      strnstr(const char *haystack, const char *needle, size_t len);

//      #include <string.h>
//      #include <xlocale.h>

//      char *
//      strcasestr_l(const char *haystack, const char *needle, locale_t loc);

// DESCRIPTION
//      The strstr() function locates the first occurrence of the null-terminated
//      string needle in the null-terminated string haystack.

//      The strcasestr() function is similar to strstr(), but ignores the case of
//      both strings.

//      The strnstr() function locates the first occurrence of the null-terminated
//      string needle in the string haystack, where not more than len characters
//      are searched.  Characters that appear after a `\0' character are not
//      searched.  Since the strnstr() function is a FreeBSD specific API, it
//      should only be used when portability is not a concern.

//      While the strcasestr() function uses the current locale, the strcasestr_l()
//      function may be passed a locale directly. See xlocale(3) for more informa-
//      tion.

// RETURN VALUES
//      If needle is an empty string, haystack is returned; if needle occurs
//      nowhere in haystack, NULL is returned; otherwise a pointer to the first
//      character of the first occurrence of needle is returned.

// EXAMPLES
//      The following sets the pointer ptr to the "Bar Baz" portion of largestring:

//            const char *largestring = "Foo Bar Baz";
//            const char *smallstring = "Bar";
//            char *ptr;

//            ptr = strstr(largestring, smallstring);

//      The following sets the pointer ptr to NULL, because only the first 4 char-
//      acters of largestring are searched:

//            const char *largestring = "Foo Bar Baz";
//            const char *smallstring = "Bar";
//            char *ptr;

//            ptr = strnstr(largestring, smallstring, 4);

// SEE ALSO
//      memchr(3), memmem(3), strchr(3), strcspn(3), strpbrk(3), strrchr(3),
//      strsep(3), strspn(3), strtok(3), wcsstr(3), xlocale(3)

// STANDARDS
//      The strstr() function conforms to ISO/IEC 9899:1990 (``ISO C90'').

char								*ft_strchr(const char *s, int c);
char								*ft_strrchr(const char *s, int c);

// NAME
//      strchr, strrchr -- locate character in string

// LIBRARY
//      Standard C Library (libc, -lc)

// SYNOPSIS
//      #include <string.h>

//      char *
//      strchr(const char *s, int c);

//      char *
//      strrchr(const char *s, int c);

// DESCRIPTION
//      The strchr() function locates the first occurrence of c (converted to a
//      char) in the string pointed to by s.  The terminating null character is
//      considered to be part of the string; therefore if c is `\0', the functions
//      locate the terminating `\0'.

//      The strrchr() function is identical to strchr(), except it locates the last
//      occurrence of c.

// RETURN VALUES
//      The functions strchr() and strrchr() return a pointer to the located char-
//      acter, or NULL if the character does not appear in the string.

// SEE ALSO
//      memchr(3), memmem(3), strcspn(3), strpbrk(3), strsep(3), strspn(3),
//      strstr(3), strtok(3), wcschr(3)

// STANDARDS
//      The functions strchr() and strrchr() conform to ISO/IEC 9899:1990
//      (``ISO C90'').

// BSD                             April 19, 1994                             BSD

char								*ft_strstr(const char *haystack, const
char *needle);

// NAME
//      strstr, strcasestr, strnstr -- locate a substring in a string

// LIBRARY
//      Standard C Library (libc, -lc)

// SYNOPSIS
//      #include <string.h>

//      char *
//      strstr(const char *haystack, const char *needle);

//      char *
//      strcasestr(const char *haystack, const char *needle);

//      char *
//      strnstr(const char *haystack, const char *needle, size_t len);

//      #include <string.h>
//      #include <xlocale.h>

//      char *
//      strcasestr_l(const char *haystack, const char *needle, locale_t loc);

// DESCRIPTION
//      The strstr() function locates the first occurrence of the null-terminated
//      string needle in the null-terminated string haystack.

//      The strcasestr() function is similar to strstr(), but ignores the case of
//      both strings.

//      The strnstr() function locates the first occurrence of the null-terminated
//      string needle in the string haystack, where not more than len characters
//      are searched.  Characters that appear after a `\0' character are not
//      searched.  Since the strnstr() function is a FreeBSD specific API, it
//      should only be used when portability is not a concern.

//      While the strcasestr() function uses the current locale, the strcasestr_l()
//      function may be passed a locale directly. See xlocale(3) for more informa-
//      tion.

// RETURN VALUES
//      If needle is an empty string, haystack is returned; if needle occurs
//      nowhere in haystack, NULL is returned; otherwise a pointer to the first
//      character of the first occurrence of needle is returned.

// EXAMPLES
//      The following sets the pointer ptr to the "Bar Baz" portion of largestring:

//            const char *largestring = "Foo Bar Baz";
//            const char *smallstring = "Bar";
//            char *ptr;

//            ptr = strstr(largestring, smallstring);

//      The following sets the pointer ptr to NULL, because only the first 4 char-
//      acters of largestring are searched:

//            const char *largestring = "Foo Bar Baz";
//            const char *smallstring = "Bar";
//            char *ptr;

//            ptr = strnstr(largestring, smallstring, 4);

// SEE ALSO
//      memchr(3), memmem(3), strchr(3), strcspn(3), strpbrk(3), strrchr(3),
//      strsep(3), strspn(3), strtok(3), wcsstr(3), xlocale(3)

// STANDARDS
//      The strstr() function conforms to ISO/IEC 9899:1990 (``ISO C90'').

// BSD                            October 11, 2001                            BSD

int									ft_tolower(int c);

// NAME
//      tolower, tolower_l -- upper case to lower case letter conversion

// LIBRARY
//      Standard C Library (libc, -lc)

// SYNOPSIS
//      #include <ctype.h>

//      int
//      tolower(int c);

//      #include <ctype.h>
//      #include <xlocale.h>

//      int
//      tolower_l(int c, locale_t loc);

// DESCRIPTION
//      The tolower() function converts an upper-case letter to the corresponding
//      lower-case letter.  The argument must be representable as an unsigned char
//      or the value of EOF.

//      Although the tolower() function uses the current locale, the tolower_l()
//      function may be passed a locale directly. See xlocale(3) for more informa-
//      tion.

// RETURN VALUES
//      If the argument is an upper-case letter, the tolower() function returns the
//      corresponding lower-case letter if there is one; otherwise, the argument is
//      returned unchanged.

// COMPATIBILITY
//      The 4.4BSD extension of accepting arguments outside of the range of the
//      unsigned char type in locales with large character sets is considered obso-
//      lete and may not be supported in future releases.  The towlower() function
//      should be used instead.

// SEE ALSO
//      ctype(3), islower(3), towlower(3), xlocale(3)

// STANDARDS
//      The tolower() function conforms to ISO/IEC 9899:1990 (``ISO C90'').

// BSD                              July 17, 2005                             BSD

int									ft_toupper(int c);

// NAME
//      toupper, toupper_l -- lower case to upper case letter conversion

// LIBRARY
//      Standard C Library (libc, -lc)

// SYNOPSIS
//      #include <ctype.h>

//      int
//      toupper(int c);

//      #include <ctype.h>
//      #include <xlocale.h>

//      int
//      toupper_l(int c, locale_t loc);

// DESCRIPTION
//      The toupper() function converts a lower-case letter to the corresponding
//      upper-case letter.  The argument must be representable as an unsigned char
//      or the value of EOF.

//      Although the toupper() function uses the current locale, the toupper_l()
//      function may be passed a locale directly. See xlocale(3) for more informa-
//      tion.

// RETURN VALUES
//      If the argument is a lower-case letter, the toupper() function returns the
//      corresponding upper-case letter if there is one; otherwise, the argument is
//      returned unchanged.

// COMPATIBILITY
//      The 4.4BSD extension of accepting arguments outside of the range of the
//      unsigned char type in locales with large character sets is considered obso-
//      lete and may not be supported in future releases.  The towupper() function
//      should be used instead.

// SEE ALSO
//      ctype(3), isupper(3), towupper(3), xlocale(3)

// STANDARDS
//      The toupper() function conforms to ISO/IEC 9899:1990 (``ISO C90'').

// BSD                              July 17, 2005                             BSD

void								ft_putchar(char c);

// Description Outputs the character c to the standard output.
// Param. #1 The character to output.
// Return value None.

void								ft_putstr(char const *s);

// Description Outputs the string s to the standard output.
// Param. #1 The string to output.
// Return value None.

void								ft_strclr(char *s);

// Description Sets every character of the string to the value ’\0’.
// Param. #1 The string that needs to be cleared.
// Return value None.

void								ft_putendl(char const *s);

// Description Outputs the string s to the standard output followed by a
// ’\n’.
// Param. #1 The string to output.
// Return value None

void								ft_putnbr(int n);

// Description Outputs the integer n to the standard output.
// Param. #1 The integer to output.
// Return value None.

char								*ft_strsub(char const *s,
unsigned int start, size_t len);

// Description Allocates (with malloc(3)) and returns a “fresh” substring
// from the string given as argument. The substring begins at
// indexstart and is of size len. If start and len aren’t refering to a valid substring, the behavior is undefined. If the
// allocation fails, the function returns NULL.
// Param. #1 The string from which create the substring.
// Param. #2 The start index of the substring.
// Param. #3 The size of the substring.
// Return value The substring.

void								ft_putchar_fd(char c, int fd);

// Prototype void ft_putchar_fd(char c, int fd);
// Description Outputs the char c to the file descriptor fd.
// Param. #1 The character to output.
// Param. #2 The file descriptor.
// Return value None.

void								ft_putstr_fd(char const *s, int fd);

// Description Outputs the string s to the file descriptor fd.
// Param. #1 The string to output.
// Param. #2 The file descriptor.
// Return value None.
// Libc functions write(2).

void								ft_putendl_fd(char const *s, int fd);

// Description Outputs the string s to the file descriptor fd followed by a
// ’\n’.
// Param. #1 The string to output.
// Param. #2 The file descriptor.
// Return value None.
// Libc functions write(2).

void								ft_putnbr_fd(int n, int fd);

// Description Outputs the integer n to the file descriptor fd.
// Param. #1 The integer to print.
// Param. #2 The file descriptor.
// Return value None.

void								*ft_memalloc(size_t size);

// Description Allocates (with malloc(3)) and returns a “fresh” memory
// area. The memory allocated is initialized to 0. If the allocation fails, the function returns NULL.
// Param. #1 The size of the memory that needs to be allocated.
// Return value The allocated memory area.

void								ft_memdel(void **ap);

// Description Takes as a parameter the address of a memory area that needs
// to be freed with free(3), then puts the pointer to NULL.
// Param. #1 A pointer’s address that needs its memory freed and set to
// NULL.
// Return value None.

char								*ft_strnew(size_t size);

// Description Allocates (with malloc(3)) and returns a “fresh” string ending with ’\0’. Each character of the string is initialized at
// ’\0’. If the allocation fails the function returns NULL.
// Param. #1 The size of the string to be allocated.
// Return value The string allocated and initialized to 0

void								ft_strdel(char **as);

// Description Takes as a parameter the address of a string that need to be
// freed with free(3), then sets its pointer to NULL.
// Param. #1 The string’s address that needs to be freed and its pointer set
// to NULL.
// Return value None.

void								ft_striter(char *s, void (*f)(char *));

// Description Applies the function f to each character of the string passed
// as argument. Each character is passed by address to f to be
// modified if necessary.
// Param. #1 The string to iterate.
// Param. #2 The function to apply to each character of s.
// Return value None.

void								ft_striteri(char *s,
void (*f)(unsigned int, char *));

// Description Applies the function f to each character of the string passed
// as argument, and passing its index as first argument. Each
// character is passed by address to f to be modified if necessary.
// Param. #1 The string to iterate.
// Param. #2 The function to apply to each character of s and its index.
// Return value None.

char								*ft_strmap(char const *s, char (*f)(char));

// Description Applies the function f to each character of the string given
// as argument to create a “fresh” new string (with malloc(3))
// resulting from the successive applications of f.
// Param. #1 The string to map.
// Param. #2 The function to apply to each character of s.
// Return value The “fresh” string created from the successive applications of
// f.

char								*ft_strmapi(char const *s,
char (*f)(unsigned int, char));

// Description Applies the function f to each character of the string passed
// as argument by giving its index as first argument to create a
// “fresh” new string (with malloc(3)) resulting from the successive applications of f.
// Param. #1 The string to map.
// Param. #2 The function to apply to each character of s and its index.
// Return value The “fresh” string created from the successive applications of
// f.

int									ft_strequ(char const *s1, char const *s2);

// Description Lexicographical comparison between s1 and s2. If the 2
// strings are identical the function returns 1, or 0 otherwise.
// Param. #1 The first string to be compared.
// Param. #2 The second string to be compared.
// Return value 1 or 0 according to if the 2 strings are identical or not.

int									ft_strnequ(char const *s1,
char const *s2, size_t n);

// Description Lexicographical comparison between s1 and s2 up to n characters or until a ’\0’ is reached. If the 2 strings are identical,
// the function returns 1, or 0 otherwise.
// Param. #1 The first string to be compared.
// Param. #2 The second string to be compared.
// Param. #3 The maximum number of characters to be compared.
// Return value 1 or 0 according to if the 2 strings are identical or not.

char								*ft_strtrim(char const *s);

// Description Allocates (with malloc(3)) and returns a copy of the string
// given as argument without whitespaces at the beginning or at
// the end of the string. Will be considered as whitespaces the
// following characters ’ ’, ’\n’ and ’\t’. If s has no whitespaces at the beginning or at the end, the function returns a
// copy of s. If the allocation fails the function returns NULL.
// Param. #1 The string to be trimed.
// Return value The “fresh” trimmed string or a copy of s.

char								**ft_strsplit(char const *s, char c);

// Description Allocates (with malloc(3)) and returns an array of “fresh”
// strings (all ending with ’\0’, including the array itself) obtained by spliting s using the character c as a delimiter.
// If the allocation fails the function returns NULL. Example
// : ft_strsplit("*hello*fellow***students*", ’*’) returns the array ["hello", "fellow", "students"].
// Param. #1 The string to split.
// Param. #2 The delimiter character.
// Return value The array of “fresh” strings result of the split.

char								*ft_itoa(int n);

// Description Allocate (with malloc(3)) and returns a “fresh” string ending with ’\0’ representing the integer n given as argument.
// Negative numbers must be supported. If the allocation fails,
// the function returns NULL.
// Param. #1 The integer to be transformed into a string.
// Return value The string representing the integer passed as argument.

unsigned int						ft_abs(int n);

t_list								*ft_lstnew(void const *content,
size_t content_size);

// Description Allocates (with malloc(3)) and returns a “fresh” link. The
// variables content and content_size of the new link are initialized 
// by copy of the parameters of the function. 
// If the parameter content is nul, the variable content is initialized to
// NULL and the variable content_size is initialized to 0 even
// if the parameter content_size isn’t. The variable next is
// initialized to NULL. If the allocation fails, the function returns
// NULL.
// Param. #1 The content to put in the new link.
// Param. #2 The size of the content of the new link.
// Return value The new link.

void								ft_lstdelone(t_list **alst,
void (*del)(void*, size_t));

// Description Takes as a parameter a link’s pointer address and frees the
// memory of the link’s content using the function del given as
// a parameter, then frees the link’s memory using free(3). The
// memory of next must not be freed under any circumstance.
// Finally, the pointer to the link that was just freed must be
// set to NULL (quite similar to the function ft_memdel in the
// mandatory part).
// Param. #1 The adress of a pointer to a link that needs to be freed.
// Return value None.

void								ft_lstdel(t_list **alst,
void (*del)(void *, size_t));

// Description Takes as a parameter the adress of a pointer to a link and
// frees the memory of this link and every successors of that link
// using the functions del and free(3). Finally the pointer to
// the link that was just freed must be set to NULL (quite similar
// to the function ft_memdel from the mandatory part).
// Param. #1 The address of a pointer to the first link of a list that needs
// to be freed.

void								ft_lstadd(t_list **alst, t_list *new);

// Description Adds the element new at the beginning of the list.
// Param. #1 The address of a pointer to the first link of a list.
// Param. #2 The link to add at the beginning of the list.
// Return value None.

void								ft_lstiter(t_list *lst,
void (*f)(t_list *elem));

// Description Iterates the list lst and applies the function f to each link.
// Param. #1 A pointer to the first link of a list.
// Param. #2 The address of a function to apply to each link of a list.
// Return value None.

t_list								*ft_lstmap(t_list *lst,
t_list *(*f)(t_list *elem));

// Description Iterates a list lst and applies the function f to each link to
// create a “fresh” list (using malloc(3)) resulting from the successive applications of f. If the allocation fails, the function
// returns NULL.
// Param. #1 A pointer’s to the first link of a list.
// Param. #2 The address of a function to apply to each link of a list.
// Return value The new list.
size_t								ft_lstlen(t_list *lst);

int									ft_count_words(char const *s, char c);
int									ft_is_lst_srtd(t_list *lst);

#endif
