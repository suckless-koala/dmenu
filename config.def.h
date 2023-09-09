/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Fira Code:size=10",
	"Joypixels:size=10"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
/* Dracula theme */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#F8F8F2", "#282A36" },
	[SchemeSel] = { "#E6E6E6", "#BD93F9" },
	[SchemeOut] = { "#4D4D4D", "#FF79C6" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
