#include <gtk/gtk.h>

void main (int argc, char *argv[]) {
    gtk_init(&argc, &argv);
    GtkWidget *win = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    GtkWidget *bin = gtk_button_new_with_label("Close Window");
    gtk_container_add(GTK_CONTAINER(win), bin);
    gtk_widget_show_all(win);
    gtk_main();
}