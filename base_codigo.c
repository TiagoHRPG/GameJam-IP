#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>


//-----------VARIAVEIS GLOBAIS--------------
const int largura_t = 800;
const int altura_t = 400;

//__________________________________________

//-----------PROTOTIPOS--------------------





//__________________________________________


int main(){
//----------VARIAVEIS DO JOGO--------------
    ALLEGRO_EVENT_QUEUE *fila_eventos = NULL;

    bool fim = false;

//_________________________________________

//-------INICIALIZACAO DE OBJETOS----------




//_________________________________________


//-------------INICIALIZACAO DA ALLEGRO E DO DISPLAY------
    ALLEGRO_DISPLAY *janela = NULL;

    if(!al_init()){
        printf("erro ao inicializar a allegro\n");
        return 1;
    }

    janela = al_create_display(largura_t, altura_t);

    if(!janela){
        printf("erro ao criar janela\n");
        return 1;
    }

//________________________________________________________

//--------INICIALIZACAO DE ADDONS E INSTALACOES-----------



//________________________________________________________


//---------CRIACAO DA FILA E DEMAIS DISPOSITIVOS----------
    fila_eventos = al_create_event_queue();



//________________________________________________________

//------------------REGISTRO DE SOURCES-------------------
    al_register_event_source(fila_eventos, al_get_display_event_source(janela));


//________________________________________________________

//-----------------FUNCOES INICIAIS-----------------------


//________________________________________________________

//-------------------LOOP INICIAL-------------------------

    while(!fim){
        ALLEGRO_EVENT ev;
        al_wait_for_event(fila_eventos, &ev);

        //------EVENTOS E LOGICA DO JOGO---------
        if(ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE){
            fim = true;
        }

        //________________________________________

        //-------------DESENHO--------------------


        al_flip_display();
        al_clear_to_color(al_map_rgb(0, 0, 0));

        //________________________________________
    }
//________________________________________________________

//------------FINALIZACOES DO PROGRAMA--------------------
    al_destroy_display(janela);
    al_destroy_event_queue(fila_eventos);

//________________________________________________________

return 0;


}
