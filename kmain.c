/*int fn(int arg1,int arg2,int arg3)
{
     return arg1+arg2+arg3;
   
}*/
char *fb=(char *) 0x000B8000;

void fb_write_cell()
{
	fb[0]='H';
	fb[1]=0x07;
	fb[2]='i';
	fb[1]=0x07;
}
/*void fb_write_cell(unsigned int i,char c,unsigned char fg,unsigned bg)
{  fb[i]=((fg & 0x0F)<<4)| (bg & 0x0F);
 fb[i+1]=c; 

}*/
