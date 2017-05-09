#include  <gtk/gtk.h>

void  on_window_closed (GtkWidget  *Widget ,  gpointer  dados) 
{ 
    gtk_main_quit  (); 
}

int  main(int argc, char *argv []) 
{ 
    GtkWidget  *janela ,  *rotulo;

    /* Inicializar sistema GUI */ 
    gtk_init  ( & argc ,  & argv ); 
    
	/* Criar widget Janela */ 
    janela  =  gtk_window_new(GTK_WINDOW_TOPLEVEL);

	/* Definir alguns atributos da janela, tamanho inicial e titulo, como exemplo */
    gtk_window_set_default_size(GTK_WINDOW(janela), 200, 100);
	gtk_window_set_title(GTK_WINDOW(janela), "Exemplo 1");	
    
	/* Link "destruir" evento sobre a janela com uma função */ 
    g_signal_connect(janela ,  "destroy" ,  G_CALLBACK(on_window_closed),  NULL ); 
    
	/* Criar campo de texto sobre a variavel rotulo */ 
    rotulo  =  gtk_label_new( "Olá, mundo!" ); 
    
	/* Criar um "container" na janela recem criada e adicionar o rotulo */ 
    gtk_container_add(GTK_CONTAINER(janela), rotulo); 
    
	/* Exibir os widgets [rotulo e janela] gerados */ 
    gtk_widget_show  (rotulo); 
    gtk_widget_show  (janela); 
    
	/* Ciclo principal de eventos */ 
    gtk_main();

    return(0); 
}