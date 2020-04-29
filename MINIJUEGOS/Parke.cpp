#include <graphics.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>

#define AZUL        0
#define ROJA        1
#define VERDE       2
#define AMARILLA    3

//  dados.
char d1,d2;
//  variable juega: los primeros cuatro bits indican
//  cuales fichas juegan y cuales no.
//  turno: turno actual.
//  anturno: turno anterior (para soplar).
//  mata: indica si mat¢ o no.
//  entro: indica si lleg¢ una ficha a la casa.
char juega,turno,anturno,mata,entro;
//  ficha: cada uno de los cuatro punteros apunta a una imagen
//  que corresponde a una ficha de un color diferente.
//  flecha: apunta a la imagen de una flecha.
void *ficha[4],*flecha;
//  clase que guarda las propiedades de una ficha.
class objeto
{
 public:
//  x,y: coordenadas en la pantalla de la ficha.
//  ncas: casilla actual
//  antcas: casilla anterior.
  int x,y,ncas,antcas;
};
//  cuatro equipos de cuatro fichas.
objeto dficha[4][4];
//  clase que guarda un segmento de recta en donde se deben alinear
//  todas las fichas en esa casilla.
class casilla
{
 public:
  int x1,y1,x2,y2;
};
casilla cas[98];
//  guarda un juego.
int guardar()
{
  FILE *f;
  f=fopen("archivo.prq","wb");
  if(!f)
    return 0;
  fwrite(&d1,sizeof(char),1,f);
  fwrite(&d2,sizeof(char),1,f);
  fwrite(&juega,sizeof(char),1,f);
  fwrite(&turno,sizeof(char),1,f);
  fwrite(&anturno,sizeof(char),1,f);
  fwrite(dficha,sizeof(objeto),16,f);
  fclose(f);
  return 1;
}
//  carga un juego anterior.
int cargar()
{
  FILE *f;
  f=fopen("archivo.prq","rb");
  if(!f)
    return 0;
  fread(&d1,sizeof(char),1,f);
  fread(&d2,sizeof(char),1,f);
  fread(&juega,sizeof(char),1,f);
  fread(&turno,sizeof(char),1,f);
  fread(&anturno,sizeof(char),1,f);
  fread(dficha,sizeof(objeto),16,f);
  fclose(f);
  return 1;
}
//  asigna valores predeterminados.
void asignar()
{
  int i,j;
//  todas las fichas muertas (ncas = 0).
  for(i=0;i<4;i++)
    for(j=0;j<4;j++)
      dficha[i][j].ncas=0;
  setcolor(11);
  for(i=0;i<3;i++)
  {
    cas[i+2].x1=194;
    cas[i+2].y1=i*20+140;
    cas[i+2].x2=125;
    cas[i+2].y2=125;
    cas[i+5].x1=180-i*20;
    cas[i+5].y1=194;
    cas[i+5].x2=125;
    cas[i+5].y2=125;
    cas[i+19].x1=140+i*20;
    cas[i+19].y1=286;
    cas[i+19].x2=125;
    cas[i+19].y2=355;
    cas[i+22].x1=194;
    cas[i+22].y1=i*20+297;
    cas[i+22].x2=125;
    cas[i+22].y2=355;
    cas[i+36].x1=286;
    cas[i+36].y1=337-i*20;
    cas[i+36].x2=355;
    cas[i+36].y2=355;
    cas[i+39].x1=297+i*20;
    cas[i+39].y1=286;
    cas[i+39].x2=355;
    cas[i+39].y2=355;
    cas[i+53].x1=355;
    cas[i+53].y1=125;
    cas[i+53].x2=337-i*20;
    cas[i+53].y2=194;
    cas[i+56].x1=355;
    cas[i+56].y1=125;
    cas[i+56].x2=286;
    cas[i+56].y2=180-i*20;
  }
  for(i=0;i<5;i++)
  {
    cas[i+8].x1=113-i*23;
    cas[i+8].y1=125;
    cas[i+8].x2=113-i*23;
    cas[i+8].y2=194;
    cas[i+14].x1=21+i*23;
    cas[i+14].y1=286;
    cas[i+14].x2=21+i*23;
    cas[i+14].y2=355;
    cas[i+25].x1=125;
    cas[i+25].y1=367+i*23;
    cas[i+25].x2=194;
    cas[i+25].y2=367+i*23;
    cas[i+31].x1=286;
    cas[i+31].y1=459-i*23;
    cas[i+31].x2=355;
    cas[i+31].y2=459-i*23;
    cas[i+42].x1=367+i*23;
    cas[i+42].y1=286;
    cas[i+42].x2=367+i*23;
    cas[i+42].y2=355;
    cas[i+48].x1=459-i*23;
    cas[i+48].y1=125;
    cas[i+48].x2=459-i*23;
    cas[i+48].y2=194;
    cas[i+59].x1=286;
    cas[i+59].y1=114-i*23;
    cas[i+59].x2=355;
    cas[i+59].y2=114-i*23;
    cas[i+65].x1=125;
    cas[i+65].y1=22+i*23;
    cas[i+65].x2=194;
    cas[i+65].y2=22+i*23;
  }
  for(i=0;i<7;i++)
  {
    cas[i+70].x1=44+i*23;
    cas[i+70].y1=194;
    cas[i+70].x2=44+i*23;
    cas[i+70].y2=286;
    cas[i+77].x1=436-i*23;
    cas[i+77].y1=194;
    cas[i+77].x2=436-i*23;
    cas[i+77].y2=286;
    cas[i+84].x1=194;
    cas[i+84].y1=436-i*23;
    cas[i+84].x2=286;
    cas[i+84].y2=436-i*23;
    cas[i+91].x1=194;
    cas[i+91].y1=44+i*23;
    cas[i+91].x2=286;
    cas[i+91].y2=44+i*23;
  }
  cas[13].x1=21;
  cas[13].y1=194;
  cas[13].x2=21;
  cas[13].y2=286;
  cas[30].x1=194;
  cas[30].y1=459;
  cas[30].x2=286;
  cas[30].y2=459;
  cas[47].x1=459;
  cas[47].y1=194;
  cas[47].x2=459;
  cas[47].y2=286;
  cas[64].x1=194;
  cas[64].y1=22;
  cas[64].x2=286;
  cas[64].y2=22;
}
//  inicia el modo grafico de 640 x 480 x 16.
void mgraf()
{
  int i=VGA,j=VGAHI;
//                    aqu¡ se escribe el directorio donde se
//                   encuentra el archivo egavga.bgi.
  initgraph(&i,&j,"");
}
// dibuja el tablero.
void tablero()
{
  int i,j;
  setrgbpalette(0,53,53,53);
  setrgbpalette(3,0,0,0);
  setcolor(3);
  line(10,10,10,470);
  line(10,10,470,10);
  line(470,10,470,470);
  line(10,470,470,470);

  line(194,10,194,470);
  line(286,10,286,470);
  line(10,194,470,194);
  line(10,286,470,286);

  setfillstyle(SOLID_FILL,14);
  floodfill(240,460,3);
  setfillstyle(SOLID_FILL,12);
  floodfill(460,240,3);
  setfillstyle(SOLID_FILL,9);
  floodfill(240,20,3);
  setfillstyle(SOLID_FILL,10);
  floodfill(20,240,3);

  line(125,10,125,470);
  line(10,125,470,125);
  line(355,10,355,470);
  line(10,355,470,355);
  for(i=1;i<5;i++)
  {
    line(125,i*23+10,355,i*23+10);
    line(125,470-i*23,355,470-i*23);
    line(i*23+10,125,i*23+10,355);
    line(470-i*23,125,470-i*23,355);
  }
  for(i=6;i<8;i++)
  {
    line(194,i*23+10,286,i*23+10);
    line(194,i*23+10,125,125);
    line(i*23+10,194,125,125);
    line(194,470-i*23,286,470-i*23);
    line(194,470-i*23,125,355);
    line(i*23+10,286,125,355);
    line(i*23+10,194,i*23+10,286);
    line(470-i*23,194,355,125);
    line(286,i*23+10,355,125);
    line(470-i*23,194,470-i*23,286);
    line(470-i*23,286,355,355);
    line(286,470-i*23,355,355);
  }
  line(286,286,355,355);
  line(194,286,125,355);
  line(286,194,355,125);
  line(194,194,125,125);
  setfillstyle(SOLID_FILL,9);
  floodfill(20,20,3);
  floodfill(135,120,3);
  setfillstyle(SOLID_FILL,10);
  floodfill(20,460,3);
  floodfill(115,300,3);
  setfillstyle(SOLID_FILL,12);
  floodfill(460,20,3);
  floodfill(370,150,3);
  setfillstyle(SOLID_FILL,14);
  floodfill(460,460,3);
  floodfill(350,360,3);
  setfillstyle(SOLID_FILL,5);
  floodfill(350,120,3);
  floodfill(115,150,3);
  floodfill(370,300,3);
  floodfill(135,360,3);
  setfillstyle(XHATCH_FILL,5);
  floodfill(230,230,3);
  setcolor(3);
  line(500,240,500,270);
  line(500,240,530,240);
  line(530,240,530,270);
  line(500,270,530,270);
  line(550,240,550,270);
  line(550,240,580,240);
  line(580,240,580,270);
  line(550,270,580,270);
  if(juega&1)
  {
    setfillstyle(SOLID_FILL,9);
    bar(500,50,520,70);
  }
  if(juega&2)
  {
    setfillstyle(SOLID_FILL,12);
    bar(530,50,550,70);
  }
  if(juega&4)
  {
    setfillstyle(SOLID_FILL,10);
    bar(560,50,580,70);
  }
  if(juega&8)
  {
    setfillstyle(SOLID_FILL,14);
    bar(590,50,610,70);
  }
  rectangle(495+turno*30,45,525+turno*30,75);
}
//  dibuja un dado en la pantalla.
void hacerdado(int x,int y,int pinta)
{
  setfillstyle(SOLID_FILL,0);
  setcolor(3);
//  borra el espacio donde se va a poner la pinta.
  bar(x+1,y+1,x+29,y+29);
  if(pinta==1)
  {
    circle(x+15,y+15,1);
  }
  if(pinta==2)
  {
    circle(x+5,y+5,1);
    circle(x+25,y+25,1);
  }
  if(pinta==3)
  {
    circle(x+5,y+5,1);
    circle(x+25,y+25,1);
    circle(x+15,y+15,1);
  }
  if(pinta==4)
  {
    circle(x+5,y+5,1);
    circle(x+25,y+25,1);
    circle(x+5,y+25,1);
    circle(x+25,y+5,1);
  }
  if(pinta==5)
  {
    circle(x+5,y+5,1);
    circle(x+25,y+25,1);
    circle(x+5,y+25,1);
    circle(x+25,y+5,1);
    circle(x+15,y+15,1);
  }
  if(pinta==6)
  {
    circle(x+5,y+5,1);
    circle(x+25,y+25,1);
    circle(x+5,y+25,1);
    circle(x+25,y+5,1);
    circle(x+5,y+15,1);
    circle(x+25,y+15,1);
  }
}
//  pone a correr los dados.
void dados()
{
//  p es el n£mero de fichas que ya llegaron a la casa.
  int i,p=0,f;
//  este ciclo es para saber si jugar con uno o dos dados.
  for(i=0;i<4;i++)
//  si ncas == 1 indica que la ficha ya est  en la casa.
    if(dficha[turno][i].ncas==1)
      p++;
    else f=i;
  while(!kbhit())
  {
//  un n£mero entre 0 y 5.
    d1=random(6);
//  si hay que jugar con un dado d2 = -1 (al incrementarse queda en 0).
    if(p==3&&((turno==AZUL&&dficha[turno][f].ncas>91)||(turno==ROJA&&dficha[turno][f].ncas>77)||(turno==VERDE&&dficha[turno][f].ncas>70)||(turno==AMARILLA&&dficha[turno][f].ncas>84)))
      d2=-1;
    else
      d2=random(6);
//  se incrementan para quedar entre 1 y 6.
    d1++;
    d2++;
    hacerdado(500,240,d1);
    hacerdado(550,240,d2);
  }
  if(getch()==0)
    getch();
}
//  crea una imagen en la pantalla y la guarda en un buffer.
//  la pantalla debe estar en blanco.
void *hacerimagen(int x,int y,const char *a)
{
  register i,j;
  void *image;
  for(j=0;j<y;j++)
  {
    for(i=0;i<x;i++)
    {
      if(a[x*j+i]>='0'&&a[x*j+i]<='9')
        putpixel(10+i,10+j,(a[x*j+i]-'0'));
      if(a[x*j+i]>='a'&&a[x*j+i]<='f')
        putpixel(10+i,10+j,(a[x*j+i]-'a'+10));
    }
  }
  image=new char[imagesize(10,10,x+10,y+10)];
  if(!image)
    return 0;
  getimage(10,10,x+10,y+10,image);
  putimage(10,10,image,XOR_PUT);
//  devuelve el puntero a la imagen.
  return image;
}
//  asigna las coordenadas de las fichas y dibuja todo.
void refrescar()
{
  int i,j,k,l,numcas;
  float cont,dx,dy;
  cleardevice();
  tablero();
  hacerdado(500,240,d1);
  hacerdado(550,240,d2);
//  este ciclo recorre los cuatro equipos
  for(i=0;i<4;i++)
  {
//  comprueba si el equipo 'i' juega.
    if((juega&(1<<i)))
    {
//  este ciclo recorre cada ficha del equipo 'i'.
      for(j=0;j<4;j++)
      {
//  comprueba si la ficha 'j' del equipo 'i' est  muerta.
        if(dficha[i][j].ncas==0)
        {
          dficha[i][j].x=30+55*(j&1)+350*(i&1);
          dficha[i][j].y=30+50*((j&2)>>1)+350*((i&2)>>1);
        }
//  comprueba si la ficha 'j' del equipo 'i' lleg¢ a la casa.
        else if(dficha[i][j].ncas==1)
        {
          dficha[i][j].x=505+30*i;
          dficha[i][j].y=100+30*j;
        }
        else
        {
//  cont es el n£mero de fichas en la misma casilla m s uno.
          cont=1;
          numcas=dficha[i][j].ncas;
          for(k=0;k<4;k++)
          {
            for(l=0;l<4;l++)
            {
              if(dficha[k][l].ncas==numcas)
              {
                cont++;
              }
            }
          }
          dx=(float)(cas[dficha[i][j].ncas].x2-cas[dficha[i][j].ncas].x1)/cont;
          dy=(float)(cas[dficha[i][j].ncas].y2-cas[dficha[i][j].ncas].y1)/cont;
          cont=1;
          for(k=0;k<4;k++)
          {
            for(l=0;l<4;l++)
            {
              if(dficha[k][l].ncas==numcas)
              {
                dficha[k][l].x=cas[dficha[i][j].ncas].x1+dx*cont-5.;
                dficha[k][l].y=cas[dficha[i][j].ncas].y1+dy*cont-5.;
                cont++;
              }
            }
          }
        }
        putimage(dficha[i][j].x,dficha[i][j].y,ficha[i],COPY_PUT);
      }
    }
  }
}
void inicializar()
{
  char t;
 ALLA:
  juega=0;
  setfillstyle(SOLID_FILL,9);
  bar(0,0,639,479);
  settextjustify(CENTER_TEXT,CENTER_TEXT);
  outtextxy(320,240,"juegan las AZULES?(s/n)");
  do
  {
    t=getch();
  }while(t!='s'&&t!='n');
  if(t=='s')
//  se pone el bit '0' a 0.
    juega++;
  setfillstyle(SOLID_FILL,12);
  bar(0,0,639,479);
  settextjustify(CENTER_TEXT,CENTER_TEXT);
  outtextxy(320,240,"juegan las ROJAS?(s/n)");
  do
  {
    t=getch();
  }while(t!='s'&&t!='n');
  if(t=='s')
//  se pone el bit '1' a 0.
    juega+=2;
  setfillstyle(SOLID_FILL,10);
  bar(0,0,639,479);
  settextjustify(CENTER_TEXT,CENTER_TEXT);
  outtextxy(320,240,"juegan las VERDES?(s/n)");
  do
  {
    t=getch();
  }while(t!='s'&&t!='n');
  if(t=='s')
//  se pone el bit '2' a 0.
    juega+=4;
  setfillstyle(SOLID_FILL,14);
  bar(0,0,639,479);
  settextjustify(CENTER_TEXT,CENTER_TEXT);
  outtextxy(320,240,"juegan las AMARILLAS?(s/n)");
  do
  {
    t=getch();
  }while(t!='s'&&t!='n');
  if(t=='s')
//  se pone el bit '3' a 0.
    juega+=8;
  if(juega==0||juega==1||juega==2||juega==4||juega==8)
  {
    settextjustify(CENTER_TEXT,CENTER_TEXT);
    outtextxy(320,260,"Minimo dos jugadores");
    getch();
    goto ALLA;
  }
// el que juega primero se elige al azar.
  do
  {
    turno=random(4);
  }while(!(juega&(1<<turno)));
}
//  comprueba si una ficha 'f' del equipo al que le toca el turno
//  puede jugar 'd' casillas.
puedejugar(int f,int d)
{
  int np;
  if(!d)
    return 0;
  np=dficha[turno][f].ncas+d;
  if(dficha[turno][f].ncas>1)
  {
    if(turno==AZUL)
    {
      if(dficha[turno][f].ncas<=64&&np>64)
      {
        np=np-65+91;
        if(np<99)
          return 1;
        else
          return 0;
      }
      else if(dficha[turno][f].ncas>=70)
      {
        if(np<99)
          return 1;
        else
          return 0;
      }
      else
      {
        return 1;
      }
    }
    else if(turno==ROJA)
    {
      if(dficha[turno][f].ncas<=47&&np>47)
      {
        np=np-48+77;
        if(np<85)
          return 1;
        else
          return 0;
      }
      else if(dficha[turno][f].ncas>=70)
      {
        if(np<85)
          return 1;
        else
          return 0;
      }
      else
      {
        return 1;
      }
    }
    else if(turno==VERDE)
    {
      if(dficha[turno][f].ncas<=13&&np>13)
      {
        np=np-14+70;
        if(np<78)
          return 1;
        else
          return 0;
      }
      else if(dficha[turno][f].ncas>=70)
      {
        if(np<78)
          return 1;
        else
          return 0;
      }
      else
      {
        return 1;
      }
    }
    else
    {
      if(dficha[turno][f].ncas<=30&&np>30)
      {
        np=np-31+84;
        if(np<92)
          return 1;
        else
          return 0;
      }
      else if(dficha[turno][f].ncas>=70)
      {
        if(np<92)
          return 1;
        else
          return 0;
      }
      else
      {
        return 1;
      }
    }
  }
  return 0;
}
//  la misma que la funcion 'puedejugar' pero para el turno anterior
podiajugar(int f,int d)
{
  int np;
  if(!d)
    return 0;
  np=dficha[anturno][f].antcas+d;
  if(dficha[anturno][f].antcas>1)
  {
    if(anturno==AZUL)
    {
      if(dficha[anturno][f].antcas<=64&&np>64)
      {
        np=np-65+91;
        if(np<99)
          return 1;
        else
          return 0;
      }
      else if(dficha[anturno][f].antcas>=70)
      {
        if(np<99)
          return 1;
        else
          return 0;
      }
      else
      {
        return 1;
      }
    }
    else if(anturno==ROJA)
    {
      if(dficha[anturno][f].antcas<=47&&np>47)
      {
        np=np-48+77;
        if(np<85)
          return 1;
        else
          return 0;
      }
      else if(dficha[anturno][f].antcas>=70)
      {
        if(np<85)
          return 1;
        else
          return 0;
      }
      else
      {
        return 1;
      }
    }
    else if(anturno==VERDE)
    {
      if(dficha[anturno][f].antcas<=13&&np>13)
      {
        np=np-14+70;
        if(np<78)
          return 1;
        else
          return 0;
      }
      else if(dficha[anturno][f].antcas>=70)
      {
        if(np<78)
          return 1;
        else
          return 0;
      }
      else
      {
        return 1;
      }
    }
    else
    {
      if(dficha[anturno][f].antcas<=30&&np>30)
      {
        np=np-31+84;
        if(np<92)
          return 1;
        else
          return 0;
      }
      else if(dficha[anturno][f].antcas>=70)
      {
        if(np<92)
          return 1;
        else
          return 0;
      }
      else
      {
        return 1;
      }
    }
  }
  return 0;
}
//  mueve la ficha 'f' 'd' espacios (no la dibuja).
void moverficha(int f,int d)
{
  int np;
  np=dficha[turno][f].ncas+d;
  if(turno==AZUL)
  {
    if(dficha[turno][f].ncas==0)
      dficha[turno][f].ncas=69;
    else if(dficha[turno][f].ncas<=64&&np>64)
    {
      np=np-65+91;
      if(np<98)
        dficha[turno][f].ncas=np;
      else
      {
        dficha[turno][f].ncas=1;
        entro=1;
      }
    }
    else if(dficha[turno][f].ncas>=70)
    {
      if(np<98)
        dficha[turno][f].ncas=np;
      else
      {
        dficha[turno][f].ncas=1;
        entro=1;
      }
    }
    else
    {
      if(np>=70)
        np-=68;
      dficha[turno][f].ncas=np;
    }
  }
  else if(turno==ROJA)
  {
    if(dficha[turno][f].ncas==0)
      dficha[turno][f].ncas=52;
    else if(dficha[turno][f].ncas<=47&&np>47)
    {
      np=np-48+77;
      if(np<84)
        dficha[turno][f].ncas=np;
      else
      {
        dficha[turno][f].ncas=1;
        entro=1;
      }
    }
    else if(dficha[turno][f].ncas>=70)
    {
      if(np<84)
        dficha[turno][f].ncas=np;
      else
      {
        dficha[turno][f].ncas=1;
        entro=1;
      }
    }
    else
    {
      if(np>=70)
        np-=68;
      dficha[turno][f].ncas=np;
    }
  }
  else if(turno==VERDE)
  {
    if(dficha[turno][f].ncas==0)
      dficha[turno][f].ncas=18;
    else if(dficha[turno][f].ncas<=13&&np>13)
    {
      np=np-14+70;
      if(np<77)
        dficha[turno][f].ncas=np;
      else
      {
        dficha[turno][f].ncas=1;
        entro=1;
      }
    }
    else if(dficha[turno][f].ncas>=70)
    {
      if(np<77)
        dficha[turno][f].ncas=np;
      else
      {
        dficha[turno][f].ncas=1;
        entro=1;
      }
    }
    else
    {
      if(np>=70)
        np-=68;
      dficha[turno][f].ncas=np;
    }
  }
  else
  {
    if(dficha[turno][f].ncas==0)
      dficha[turno][f].ncas=35;
    else if(dficha[turno][f].ncas<=30&&np>30)
    {
      np=np-31+84;
      if(np<91)
        dficha[turno][f].ncas=np;
      else
      {
        dficha[turno][f].ncas=1;
        entro=1;
      }
    }
    else if(dficha[turno][f].ncas>=70)
    {
      if(np<91)
        dficha[turno][f].ncas=np;
      else
      {
        dficha[turno][f].ncas=1;
        entro=1;
      }
    }
    else
    {
      if(np>=70)
        np-=68;
      dficha[turno][f].ncas=np;
    }
  }
}
podiamatar(int f,int d)
{
  int np,i,j;
  np=dficha[anturno][f].antcas+d;
  if(anturno==AZUL)
  {
    if(dficha[anturno][f].antcas<=64&&np>64)
    {
      return 0;
    }
    else if(dficha[anturno][f].antcas>=70)
    {
      return 0;
    }
    else
    {
      if(np>=70)
        np-=68;
      for(i=0;i<4;i++)
        for(j=0;j<4;j++)
          if(dficha[i][j].ncas==np&&i!=anturno)
            return 1;
      return 0;
    }
  }
  else if(anturno==ROJA)
  {
    if(dficha[anturno][f].antcas<=47&&np>47)
    {
      return 0;
    }
    else if(dficha[anturno][f].antcas>=70)
    {
      return 0;
    }
    else
    {
      if(np>=70)
        np-=68;
      for(i=0;i<4;i++)
        for(j=0;j<4;j++)
          if(dficha[i][j].ncas==np&&i!=anturno)
            return 1;
      return 0;
    }
  }
  else if(anturno==VERDE)
  {
    if(dficha[anturno][f].antcas<=13&&np>13)
    {
      return 0;
    }
    else if(dficha[anturno][f].antcas>=70)
    {
      return 0;
    }
    else
    {
      if(np>=70)
        np-=68;
      for(i=0;i<4;i++)
        for(j=0;j<4;j++)
          if(dficha[i][j].ncas==np&&i!=anturno)
            return 1;
      return 0;
    }
  }
  else
  {
    if(dficha[anturno][f].antcas<=30&&np>30)
    {
      return 0;
    }
    else if(dficha[anturno][f].antcas>=70)
    {
      return 0;
    }
    else
    {
      if(np>=70)
        np-=68;
      for(i=0;i<4;i++)
        for(j=0;j<4;j++)
          if(dficha[i][j].ncas==np&&i!=anturno)
            return 1;
      return 0;
    }
  }
}
elegirficha(int d)
{
  char fi=0,dd1,dd2;
  int t;
  dd1=d1*(d&1);
  dd2=d2*((d&2)>>1);
  while((!puedejugar(fi,dd1)&&!puedejugar(fi,dd2))&&(!(dficha[turno][fi].ncas==0&&d1==d2)))
  {
    fi++;
    if(fi>3)
      return -1;
  }
  do
  {
    putimage(dficha[turno][fi].x,dficha[turno][fi].y-15,flecha,XOR_PUT);
    if(!(t=getch()))t=getch()+256;
    putimage(dficha[turno][fi].x,dficha[turno][fi].y-15,flecha,XOR_PUT);
    if(t==333)
    {
      do
      {
        fi++;
        if(fi>3)
          fi=0;
      }while((!puedejugar(fi,dd1)&&!puedejugar(fi,dd2))&&(!(dficha[turno][fi].ncas==0&&d1==d2)));
    }
    if(t==331)
    {
      do
      {
        fi--;
        if(fi<0)
          fi=3;
      }while((!puedejugar(fi,dd1)&&!puedejugar(fi,dd2))&&(!(dficha[turno][fi].ncas==0&&d1==d2)));
    }
  }while(t!=13);
  return fi;
}
elegirfichasoplar()
{
  char fi=0;
  int t;
  while(dficha[anturno][fi].ncas==0)
  {
    fi++;
    if(fi>3)
      return -1;
  }
  do
  {
    putimage(dficha[anturno][fi].x,dficha[anturno][fi].y-15,flecha,XOR_PUT);
    if(!(t=getch()))t=getch()+256;
    putimage(dficha[anturno][fi].x,dficha[anturno][fi].y-15,flecha,XOR_PUT);
    if(t==333)
    {
      do
      {
        fi++;
        if(fi>3)
          fi=0;
      }while(dficha[anturno][fi].ncas==0);
    }
    if(t==331)
    {
      do
      {
        fi--;
        if(fi<0)
          fi=3;
      }while(dficha[anturno][fi].ncas==0);
    }
  }while(t!=13);
  return fi;
}
void soplar()
{
  int f,i;
  f=elegirfichasoplar();
  if(f==-1)
    return;
  if(podiamatar(f,d1+d2))
  {
    dficha[anturno][f].ncas=0;
    refrescar();
    return;
  }
  for(i=0;i<4;i++)
    if(podiajugar(i,d2)&&i!=f)
      break;
  else if(podiamatar(f,d1)&&i<4)
  {
    dficha[anturno][f].ncas=0;
    refrescar();
    return;
  }
  for(i=0;i<4;i++)
    if(podiajugar(i,d1)&&i!=f)
      break;
  else if(podiamatar(f,d2)&&i<4)
  {
    dficha[anturno][f].ncas=0;
    refrescar();
    return;
  }
}
char elegirdados(int f)
{
  char e=1,c;
  do
  {
    if(e&1)
    {
      setfillstyle(SOLID_FILL,5);
      fillellipse(515,220,5,5);
    }
    else
    {
      setfillstyle(SOLID_FILL,0);
      bar(500,200,525,230);
    }
    if(e&2)
    {
      setfillstyle(SOLID_FILL,5);
      fillellipse(565,220,5,5);
    }
    else
    {
      setfillstyle(SOLID_FILL,0);
      bar(550,200,575,230);
    }
    c=getch();
    if(c==0)
    {
      c=getch();
      if(c==75)
      {
        e--;
        if(e<1)
          e=3;
        if(e==3&&!(puedejugar(f,d1+d2)))
          e--;
      }
      if(c==77)
      {
        e++;
        if(e==3&&!(puedejugar(f,d1+d2)))
          e++;
        if(e>3)
          e=1;
      }
    }
  }while(c!=13);
  return e;
}
void matar()
{
  int i,j,k;
  for(i=0;i<4;i++)
    for(j=0;j<4;j++)
      for(k=0;k<4;k++)
      {
        if(dficha[i][j].ncas==dficha[turno][k].ncas&&dficha[i][j].ncas>1&&i!=turno&&dficha[i][j].ncas!=69&&dficha[i][j].ncas!=8&&dficha[i][j].ncas!=13&&dficha[i][j].ncas!=18&&dficha[i][j].ncas!=25&&dficha[i][j].ncas!=30&&dficha[i][j].ncas!=35&&dficha[i][j].ncas!=42&&dficha[i][j].ncas!=47&&dficha[i][j].ncas!=52&&dficha[i][j].ncas!=59&&dficha[i][j].ncas!=64)
        {
          dficha[i][j].ncas=0;
          mata=1;
        }
        if(dficha[turno][k].antcas==0&&dficha[turno][k].ncas!=0&&i!=turno)
        {
          if(turno==AZUL&&dficha[i][j].ncas==69)
          {
            dficha[i][j].ncas=0;
            mata=1;
          }
          if(turno==ROJA&&dficha[i][j].ncas==52)
          {
            dficha[i][j].ncas=0;
            mata=1;
          }
          if(turno==VERDE&&dficha[i][j].ncas==18)
          {
            dficha[i][j].ncas=0;
            mata=1;
          }
          if(turno==AMARILLA&&dficha[i][j].ncas==35)
          {
            dficha[i][j].ncas=0;
            mata=1;
          }
        }
      }
}
void jugar()
{
  char i,f,d;
  do
  {
    entro=0;
    mata=0;
    for(i=0;i<4;i++)
      dficha[turno][i].antcas=dficha[turno][i].ncas;
    f=0;
    for(i=0;i<4;i++)
      if(dficha[turno][i].ncas>1)
        f=1;
    if(f==1)
      d=1;
    else
      d=3;
    for(i=0;i<d;i++)
    {
      dados();
      if(d1==d2)
        break;
      else if(d>1)
        getch();
    }
    f=elegirficha(3);
    if(f<0)
      continue;
    d=0;
    for(i=0;i<4;i++)
      if(dficha[turno][i].ncas==0)
        d++;
    if(d>1&&dficha[turno][f].ncas==0)
    {
      settextjustify(CENTER_TEXT,CENTER_TEXT);
      outtextxy(240,240,"(u)na o (t)odas");
      do
      {
        d=getch();
      }while(d!='u'&&d!='t');
      if(d=='t')
      {
        for(i=0;i<4;i++)
        {
          if(dficha[turno][i].ncas==0)
          {
            if(turno==AZUL)
              dficha[turno][i].ncas=69;
            if(turno==ROJA)
              dficha[turno][i].ncas=52;
            if(turno==VERDE)
              dficha[turno][i].ncas=18;
            if(turno==AMARILLA)
              dficha[turno][i].ncas=35;
          }
        }
        matar();
        refrescar();
        continue;
      }
    }
    if(puedejugar(f,d1)&&puedejugar(f,d2))
      d=elegirdados(f);
    else if(puedejugar(f,d1))
      d=1;
    else
      d=2;
    if(d&1)
      moverficha(f,d1);
    if(d&2)
      moverficha(f,d2);
    for(f=0;f<4;f++)
      if(dficha[turno][f].ncas!=1)
        break;
    if(f==4)
      break;
    if(d==3)
    {
      matar();
      refrescar();
      continue;
    }
    refrescar();
    d^=3;
    f=elegirficha(d);
    if(f<0)
    {
      matar();
      continue;
    }
    if(d&1)
      moverficha(f,d1);
    else
      moverficha(f,d2);
    for(f=0;f<4;f++)
      if(dficha[turno][f].ncas!=1)
        break;
    if(f==4)
      break;
    matar();
    refrescar();
  }while(d1==d2||mata||entro);
  anturno=turno;
  do
  {
    if(turno==AZUL)
      turno=VERDE;
    else if(turno==VERDE)
      turno=AMARILLA;
    else if(turno==AMARILLA)
      turno=ROJA;
    else if(turno==ROJA)
      turno=AZUL;
  }while(!(juega&(1<<turno)));
  refrescar();
}
menu()
{
  int op=0,c;
  settextjustify(LEFT_TEXT,BOTTOM_TEXT);
  outtextxy(550,350,"Jugar");
  outtextxy(550,370,"Soplar");
  outtextxy(550,390,"Guardar");
  outtextxy(550,410,"Rendirse");
  setfillstyle(SOLID_FILL,0);
  do
  {
    outtextxy(500,350+op*20,">");
    if(!(c=getch()))c=getch()+256;
    if(c==328)
    {
      op--;
      if(op<0)
      op=3;
    }
    if(c==336)
    {
      op++;
      if(op>3)
        op=0;
    }
    bar(495,340,540,430);
  }while(c!=13);
  return op;
}
void juego()
{
  int op;
  while(1)
  {
    for(op=0;op<4;op++)
      if(dficha[anturno][op].ncas!=1)
        break;
    if(op==4)
    {
      settextjustify(CENTER_TEXT,CENTER_TEXT);
      if(anturno==AZUL)
      {
        setcolor(9);
        outtextxy(240,240,"ganan las azules");
      }
      else if(anturno==ROJA)
      {
        setcolor(12);
        outtextxy(240,240,"ganan las rojas");
      }
      else if(anturno==VERDE)
      {
        setcolor(10);
        outtextxy(240,240,"ganan las verdes");
      }
      else
      {
        setcolor(14);
        outtextxy(240,240,"ganan las amarillas");
      }
      getch();
      return;
    }
    op=menu();
    if(op==0)
      jugar();
    else if(op==1)
    {
      soplar();
    }
    else if(op==2)
    {
      guardar();
    }
    else if(op==3)
    {
      for(op=0;op<4;op++)
        dficha[turno][op].ncas=0;
      juega&=(~(1<<turno));
      if(juega==1||juega==2||juega==4||juega==8)
        return;
      do
      {
        if(turno==AZUL)
          turno=VERDE;
        else if(turno==VERDE)
          turno=AMARILLA;
        else if(turno==AMARILLA)
          turno=ROJA;
        else if(turno==ROJA)
          turno=AZUL;
      }while(!(juega&(1<<turno)));
      refrescar();
    }
  }
}
int existe(const char *nombrearch)
{
  FILE *f;
  f=fopen(nombrearch,"rb");
  if(!f)
    return 0;
  fclose(f);
  return 1;
}
void ubicar()
{
  char op='n';
  if(existe("archivo.prq"))
  {
    outtextxy(235,300,"(N)uevo o (E)xistente ?");
    do
    {
      op=getch();
      if(op=='N')
        op='n';
      if(op=='E')
        op='e';
    }while(op!='n'&&op!='e');
  }
  if(op=='n')
  {
    inicializar();
  }
  tablero();
  asignar();
  if(op=='e')
  {
    cargar();
    refrescar();
  }
  else
  {
    refrescar();
    jugar();
  }
}
main()
{
  int i;
  randomize();
  mgraf();
  ficha[VERDE]=hacerimagen(10,10,
  "   3333   "
  "  3aaaa3  "
  "  3aaaa3  "
  "   3aa3   "
  "  3aaaa3  "
  "  3aaaa3  "
  " 3aaaaaa3 "
  "3aaaaaaaa3"
  "3aaaaaaaa3"
  "3333333333");
  if(!ficha[VERDE])return 1;
  ficha[ROJA]=hacerimagen(10,10,
  "   3333   "
  "  3cccc3  "
  "  3cccc3  "
  "   3cc3   "
  "  3cccc3  "
  "  3cccc3  "
  " 3cccccc3 "
  "3cccccccc3"
  "3cccccccc3"
  "3333333333");
  if(!ficha[ROJA])return 1;
  ficha[AZUL]=hacerimagen(10,10,
  "   3333   "
  "  399993  "
  "  399993  "
  "   3993   "
  "  399993  "
  "  399993  "
  " 39999993 "
  "3999999993"
  "3999999993"
  "3333333333");
  if(!ficha[AZUL])return 1;
  ficha[AMARILLA]=hacerimagen(10,10,
  "   3333   "
  "  3eeee3  "
  "  3eeee3  "
  "   3ee3   "
  "  3eeee3  "
  "  3eeee3  "
  " 3eeeeee3 "
  "3eeeeeeee3"
  "3eeeeeeee3"
  "3333333333");
  if(!ficha[AMARILLA])return 1;
  flecha=hacerimagen(10,10,
  "   3333   "
  "   3333   "
  "   3333   "
  "   3333   "
  "   3333   "
  "3333333333"
  " 33333333 "
  "  333333  "
  "   3333   "
  "    33    ");
  if(!flecha)return 1;
  ubicar();
  juego();
  closegraph();
  for(i=0;i<4;i++)
    delete ficha[i];
  delete flecha;
  return 0;
}
