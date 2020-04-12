#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	FILE *fp;
	const char* SS = 
		"\\documentclass[oneside]{book}\n"
		"\\usepackage{xeCJK, indentfirst, makeidx, listings, amsmath, amssymb}\n"
		"\\usepackage[breaklinks, colorlinks, linkcolor=black, citecolor=black, urlcolor=black]{hyperref}\n"
		"\\setCJKmainfont[BoldFont=Noto Serif CJK SC Bold, ItalicFont=Noto Serif CJK SC Light]{Noto Serif CJK SC}\n"
		"\\setCJKsansfont[BoldFont=Noto Sans CJK SC Bold, ItalicFont=Noto Sans CJK SC Light]{Noto Sans CJK SC}\n"
		"\\setCJKmonofont[BoldFont=Noto Sans Mono CJK SC Bold, ItalicFont=Noto Sans Mono CJK SC]{Noto Sans Mono CJK SC}\n"
		"\\setlength{\\parindent}{2em}\n"
		"\\usepackage[hmargin=1.25in, vmargin=1in]{geometry}\n"
		"\\usepackage{enumitem}\n"
		"\\newtheorem{dingyi}{定义}[section]\n\\newtheorem{dingli}{定理}[section]\n"
		"\\newcommand{\\tabincell}[2]{\\begin{tabular}{@{}#1@{}}#2\\end{tabular}}\n"
		"\\makeindex\n"
		"\\title{xxx}\n"
		"\\begin{document}\n"
		"\\maketitle\n"
		"\\tableofcontents\n"
		"\\end{document}\n";

	if ((fp = fopen("tex.tex", "w")) == NULL)
	{
		fprintf(stdout, "Can't open \"Makefile\"\n");
		exit(1);
	}
	fputs(SS, fp);
	if(fclose(fp) != 0)
		fprintf(stderr, "Error closing file\n");
	printf("done.\n");

}
