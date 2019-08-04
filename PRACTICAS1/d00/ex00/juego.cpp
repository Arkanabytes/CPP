#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<time.h>

#define ejey 23

char dibujo_1[]={' ',' ','*',' ',' ',0};
char dibujo_2[]={' ','*',' ','*',' ',0};
char dibujo_3[]={'*',' ','=',' ','*',0};

char morir_1[]={'#','#',' ','#','#',0};
char morir_2[]={' ',' ','#',' ',' ',0};
char morir_3[]={'#','#',' ','#','#',0};

char morir_4[]={' ',' ','#',' ',' ',0};
char morir_5[]={'#','#',' ','#','#',0};
char morir_6[]={' ',' ','#',' ',' ',0};

char limpiar[]= {' ',' ',' ',' ',' ',0};

int x=40, y=22;
int d=0;
int xd;
bool disparo = false;
int puntaje=0;
int vida=3;
int corazon=3;
int level=100;
int levell=1;
int sumar=0;
//posicion de asteroides
int ran;
int ya= 8, xa= 12;
int yb= 12, xb= 18;
int yx= 6, xx= 58;
int yc= 10, xc= 70;

//dibujo que aparece cuendo la nave explota
void morir()
{
    textcolor(RED);
    gotoxy(x,y); puts(morir_1);
    gotoxy(x,y+1); puts(morir_2);
    gotoxy(x,y+2); puts(morir_3);
    Sleep(380);    
    gotoxy(x,y); puts(morir_4);
    gotoxy(x,y+1); puts(morir_5);
    gotoxy(x,y+2); puts(morir_6);
    Sleep(380);
    gotoxy(x,y); puts(dibujo_1);   
    gotoxy(x,y+1); puts(dibujo_2);
    gotoxy(x,y+2); puts(dibujo_3);    
    textcolor(WHITE);
    corazon = 3;
}
//las vidas que nos quedan
void vidas(int vida)
{
    gotoxy(34,1); printf("Vidas: %d",vida);
    
}
//dibuja los corazones que tenemos
void salud(int salud)
{
    textcolor(RED);
    gotoxy(70,1); printf(" ");
    gotoxy(71,1); printf(" ");
    gotoxy(72,1); printf(" ");
    int c;
    for(c=0;c<salud;c++)
    {
         gotoxy(70+c,1);
         printf("%c",3);
    }textcolor(WHITE);
}

void nivel(int nivel)
{
    Sleep(nivel);
}

void random()   //genera un valor X random para los asteroides
{

    do{
        
       ran = (rand() %70) +6;
    }while(ran % 2 !=0);
}

void jugar()
{
    //se le asigna a 'xd' el valor de 'x' para que el disparo no se mueva junto a la nave
    if(!disparo) xd = x;
    gotoxy(1,1); printf("Puntaje: %d", puntaje);
    

    gotoxy(xd +2, y + d -1 ); printf("."); //bala para disparar
    // dibujpo de los Asteroides    
    gotoxy(xa,ya); printf("%c",5);
    gotoxy(xb,yb); printf("%c",5);
    gotoxy(xx,yx); printf("%c",5);
    gotoxy(xc,yc); printf("%c",5);
    
    nivel(level); // funcion con Sleep para subir velocidad del nivel

    gotoxy(xd +2, y + d -1); printf(" ");
    //borrado de los asteroides
    gotoxy(xa,ya); printf(" ");
    gotoxy(xb,yb); printf(" ");
    gotoxy(xx,yx); printf(" ");
    gotoxy(xc,yc); printf(" ");    
    if(disparo == true) d--;
    
    //si el disparo llega al final sin tocar el asteroide la variable 'disparo' se configura para volver a disparar
    if(y + d < 5)
    {   d=0;
        disparo = false;
    }
    //  recorrido y colicion con disparo
    if((ya >= y+d && xa == xd+2))
    {
        
        ya=4;
        d=0;
        puntaje+=10;
        disparo = false;
        random();
        xa = ran;
        /*if(xd+2 == x && y + d -1 == y)
        {puntaje -=10;
        corazon--;
        salud(corazon);
        
    }*/
        
    }
    
    if(ya > ejey)
    {
        random();
        xa = ran;
        ya = 4;
        sumar++;
    }


    if(yb > ejey)
    {
        yb=4;
        random();
        xb= ran;
        sumar++;
    }
    if(yb >= y+d && xb == xd+2)
    {
        yb=4;
        d=0;
        puntaje+=10;
        disparo = false;
        random();
        xb = ran;
    }
     if(yx > ejey)
    {
        yx=4;
        random();
        xx=ran;
        sumar++;
    }
    if(yx >= y+d && xx == xd+2)
    {
        yx=4;
        d=0;
        puntaje+=10;
        disparo = false;
        random();
        xx=ran;
    }
     if(yc > ejey )
    {
        yc=4;
        random();
        xc=ran;
        sumar++;
    }
    if(yc >= y+d && xc == xd+2)
    {
        yc=4;
        d=0;
        puntaje+=10;
        disparo = false;
        random();
        xc=ran;
    }
    //fin del recorrido y de la colicion con disparo
    
    // nivel:
    gotoxy(18,1);printf(" ");
    gotoxy(18,1);printf("Nivel: %d",levell);
    

    if(sumar == 10)
    {
    level -=5;      //cada 10 asteroides que toquen el suelo la variable level decrementa 5
    levell++;
    sumar=0;
    } //fin nivel   

    //colicion del avion con asteriodes
    
    if((xa < x+5 && xa > x-1 && ya== y) || (xb < x+5 && xb > x-1 && yb== y) || (xc < x+5 && xc > x-1 && yc== y)|| (xx < x+5 && xx > x-1 && yx== y))
    {
        
        corazon--;
        salud(corazon);
        printf("\a");
        if(corazon ==0)
        {
            corazon=3;
            vida--;
            morir();
            salud(corazon);
            vidas(vida);
        }

        
    }
    //no desaparece el avion en el momento de la colocion
    gotoxy(x,y); puts(dibujo_1);   
    gotoxy(x,y+1); puts(dibujo_2);
    gotoxy(x,y+2); puts(dibujo_3);
    
    //aumenta Y para que bajen los asteroides
    ya+=1;
    yb+=1;
    yx+=1;
    yc+=1;
    
    
    //  movimiento de la nave, mas disparo  
    if(kbhit())
    {
    
        unsigned char tecla=getch();
         switch(tecla)
    {
        case 'a':
        case 'A':
            
            gotoxy(x,y); puts(limpiar);
            gotoxy(x,y+1); puts(limpiar);
            gotoxy(x,y+2); puts(limpiar);
            
            x -=2;
            
            if(x <= 2)  // si x es menor a 2 el avion queda en la posicion 2 para no irse de la pantalla
            {
                x=2;
            }
        
            gotoxy(x,y); puts(dibujo_1);   
            gotoxy(x,y+1); puts(dibujo_2);
            gotoxy(x,y+2); puts(dibujo_3);
        
            break;
            
        case 'd':
        case 'D':
            gotoxy(x,y); puts(limpiar);
            gotoxy(x,y+1); puts(limpiar);
            gotoxy(x,y+2); puts(limpiar);
            
            x +=2;
            
            if(x >=75) // si x es mayor a 75 el avion queda en la posicion 75 para no irse de la pantalla
            {
                x=75;
            }
            
            gotoxy(x,y); puts(dibujo_1);   
            gotoxy(x,y+1); puts(dibujo_2);
            gotoxy(x,y+2); puts(dibujo_3);
            
            break;
    
        case 'w':
        case 'W':
            disparo = true;

            break;
        
    }// fin switch

    }//fin if kbhit()
    
    
} 

void lineas()
{
    int i;
    char linea[]={'_',0};
    char lineav[]={'|',0};
    int xl=2, yl=3;
    for(i=xl;i <= 79;i++)
    {
        gotoxy(i,yl); puts(linea);
    }
    for(i = xl;i <= 79;i++)
    {
        gotoxy(i,25); puts(linea);
    }
    
    for(i=yl+1;i <= 25;i++)
    {
        gotoxy(1,i); puts(lineav);
    }
    for(i=yl+1;i <= 25;i++)
    {
        gotoxy(80,i); puts(lineav);
    }
}
    

int main()
{
    //dibuja la nave para que aparesca de un primer momento
    //HACER PRESENTACION 
           
    gotoxy(x,y); puts(dibujo_1);                   
    gotoxy(x,y+1); puts(dibujo_2);
    gotoxy(x,y+2); puts(dibujo_3);        
    vidas(vida);
    salud(corazon);
    lineas();
    while(vida > 0){
        jugar();
    }
    
    gotoxy(35,15);printf("GAME OVER");
    getch();
    return 0;
}

