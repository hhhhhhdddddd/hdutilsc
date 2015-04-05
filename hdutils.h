#ifndef HDUTILS_H
#define HDUTILS_H

/* Evite le warning "variable pas utilisée" */
void noUnusedVarWarning();

/* Affiche un trait vertical sur la sortie standard" */
void printSectionSeparator(void);

/* Affiche un tableau de string. La fin du tableau est indiquée par NULL. */
void printArrayOfStr(char **strArr);

#endif