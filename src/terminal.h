#ifndef TERMINAL_H
#define TERMINAL_H

void initEditor(void);
void die(const char *s);
void enableRawMode(void);
void disableRawMode(void);
char editorReadKey(void);
void editorProcessReadKey(void);
void editorRefreshScreen(void);

#endif