// Librerie utilizzate per la programmazione del codice
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h> // Utilizzata per "system("cls")" per ripilure lo schermo

// Funzione per ricominciare il programma quando richiesto
void aspettaInput()
{
    printf("\n\nPremi un tasto per continuare...");
    getch();
}

// Funzione per la stampa del menu iniziale
void MenuStart()
{
    system("cls");
    printf(" ________________________________________ \n");
    printf("|                                        |\n");
    printf("|        Benvenuto/a su TicketTwo        |\n");
    printf("|________________________________________|\n");
    printf("|                                        |\n");
    printf("|     Selezionare cosa intende fare?     |\n");
    printf("|                                        |\n");
    printf("|              1) Utente                 |\n");
    printf("|              2) Operatore              |\n");
    printf("|________________________________________|\n");
    printf("Inserire la scelta desiderata: ");
}

// Funzione per la stampa del menù utente
void menuUtente()
{
    system("cls");
    printf(" ________________________________________\n");
    printf("|                                        |\n");
    printf("|            Benvenuto Utente            |\n");
    printf("|________________________________________|\n");
    printf("|                                        |\n");
    printf("|     Selezionare cosa intende fare?     |\n");
    printf("|                                        |\n");
    printf("|          1) Acquista biglietti         |\n");
    printf("|          2) Visualizza biglietti       |\n");
    printf("|          0) Indietro                   |\n");
    printf("|________________________________________|\n");
    printf("Inserire la scelta desiderata: ");
}

// Funzione per la stampa del menù acquisto
void MenuAcquistaBiglietti()
{
    system("cls");
    printf(" ________________________________________ \n");
    printf("|                                        |\n");
    printf("|           Acquista biglietti           |\n");
    printf("|________________________________________|\n");
    printf("|                                        |\n");
    printf("|         - Concerto 1 - 50 euro         |\n");
    printf("|         - Concerto 2 - 70 euro         |\n");
    printf("|                                        |\n");
    printf("|              0) Indietro               |\n");
    printf("|________________________________________|\n");
    printf("Inserire il concerto desiderato: ");
}

// Funzione per la stampa del menù della richiesta della quantità dei biglietti desiderati
void MenuNumeroBiglietti()
{
    printf(" ________________________________________ \n");
    printf("|                                        |\n");
    printf("|           Numero di biglietti          |\n");
    printf("|________________________________________|\n");
    printf("Inserire il numero biglietti desiderato: ");
}

// Funzione per la stampa del menù dell'età da assegnare a ogni biglietto
void MenuEta()
{
    system("cls");
    printf(" ________________________________________ \n");
    printf("|                                        |\n");
    printf("|           Assegnazione eta'            |\n");
    printf("|________________________________________|\n");
}

// Funzione per la stampa del menù con il costo totale dei o del biglietto
void MenuSpesaTotale()
{
    system("cls");
    printf(" ________________________________________ \n");
    printf("|                                        |\n");
    printf("|              Prezzo totale             |\n");
    printf("|________________________________________|\n");
}

// Funzione per la stampa del menu del pagamento dei o del biglietto
void MenuPagamento()
{
    printf(" ________________________________________ \n");
    printf("|                                        |\n");
    printf("|          Pagamento in contanti         |\n");
    printf("|________________________________________|\n");
    printf("Inserire i contanti: ");
}

// Funzione per la stampa del menù della restituzione del resto all'utente
void MenuResto()
{
    printf(" ________________________________________ \n");
    printf("|                                        |\n");
    printf("|           Erogazione del resto         |\n");
    printf("|________________________________________|\n");
}

// Funzione per la stampa del menù dei concerti disponibili
void MenuListinoBiglietti()
{
    system("cls");
    printf(" ________________________________________\n");
    printf("|                                        |\n");
    printf("|          Concerti disponibili          |\n");
    printf("|________________________________________|\n");
    printf("|                                        |\n");
    printf("|         - Concerto 1 - 50 euro         |\n");
    printf("|         - Concerto 2 - 70 euro         |\n");
    printf("|________________________________________|\n");
}

// Funzione per la stampa del menù del pagamento dei o del biglietto
void MenuCompPagamento()
{
    printf(" ________________________________________ \n");
    printf("|                                        |\n");
    printf("|       Completare il pagamento...       |\n");
    printf("|________________________________________|\n");
}

// Funzione per la stampa del biglietto per il concerto
void StampaBiglietto(int concerto, int biglietti, float prezzo, float totale)
{
    printf(" ________________________________________ \n");
    printf("|                                        |\n");
    printf("|           BIGLIETTO CONCERTO           |\n");
    printf("|________________________________________|\n");
    printf("|                                        |\n");
    printf("|       Concerto: %d                      |\n", concerto);
    printf("|       Numero di biglietti: %d           |\n", biglietti);
    printf("|       Prezzo unitario: %.2f euro      |\n", prezzo);
    printf("|       Prezzo totale: %.2f euro       |\n", totale);
    printf("|________________________________________|\n");
    printf(" ________________________________________ \n");
    printf("|                                        |\n");
    printf("|         GRAZIE E BUON CONCERTO         |\n");
    printf("|________________________________________|\n");
}

// Funzione per la stampa del menù del login dell'operatore
void MenuLogIn()
{
    system("cls");
    printf(" ________________________________________ \n");
    printf("|                                        |\n");
    printf("|            Eseguire il login           |\n");
    printf("|________________________________________|\n");
    printf("Inserire la password: ");
}

// Funzione per la stampa del menù operatore
void menuOperatore()
{
    printf(" ________________________________________\n");
    printf("|                                        |\n");
    printf("|            Benvenuto Operatore         |\n");
    printf("|________________________________________|\n");
    printf("|                                        |\n");
    printf("|     Selezionare cosa intende fare?     |\n");
    printf("|                                        |\n");
    printf("|          1) Vedi provvigione           |\n");
    printf("|          2) Ritira provvigione         |\n");
    printf("|________________________________________|\n");
    printf("Inserire la scelta desiderata: ");
}

// Funzione per visualizzare la provvigione attuale
void MenuVisProvvigione(float provvigione)
{
    printf(" ________________________________________ \n");
    printf("|                                        |\n");
    printf("|   Visualizzazione della provvigione    |\n");
    printf("|________________________________________|\n");
    printf("Provvigione attuale: %.2f euro\n", provvigione);
}

// Funzione per verificare la password
int VerificaPassw(int passw)
{
    scanf("%d", &passw);
    while (passw != 1234)
    {
        printf("Riprova, password errata: ");
        scanf("%d", &passw);
    }
}

// Funzione per ritirare la provvigione
void MenuRitProvvigione(float provvigione, int passw)
{
    system("cls");
    printf(" ________________________________________ \n");
    printf("|                                        |\n");
    printf("|  Ritiro della provvigione in corso...  |\n");
    printf("|________________________________________|\n");
    printf("Inserire la password: ");
    VerificaPassw(passw);  // Chiamata della funzione per verificare la password
    printf("Provvigione di %.2f ritirata.\n", provvigione); // Messaggio di conferma del ritiro della provvigione
}

float CalcoloPagamento(float totale) // Funzione per calcolare il resto e/o il denaro insufficiente al completamento della transazione
{
    float pagamento = 0;
    float resto = 0;

    scanf("%f", &pagamento);
    while (pagamento < totale) // Ciclo while per verificare l'importo
    {
        resto = totale - pagamento; // Calcola l'importo mancante
        system("cls");
        MenuCompPagamento(); // Chiamata dela funzione per visualizzare il menù dell'attesa del pagamento
        printf("Contanti insufficienti, mancano: %.2f euro \n", resto);
        printf("Inserire i contanti mancati: ");
        scanf("%f", &resto); // Chiede l'importo mancato
        pagamento += resto;  // Aggiunge l'importo mancante
    }
    system("cls");
    // Verifica dell'erogazione del resto
    if (pagamento > totale)
    {
        resto = pagamento - totale; // Calcolo del resto da erogare
        MenuResto(); // Chiamata della funzione per visualizzare il menù del resto
        printf("Il resto ammonta a: %.2f euro \n", resto); // Messaggio che dice a quanto ammonta il resto
    }
    printf("Pagamento completato. Totale: %.2f euro\n", totale); // Messaggio di conferma del pagamento
}

int main()
{
    int persona = 0;
    int selezione = 0;
    int concerto = 0;
    float prezzo = 0;
    int biglietti = 0;
    int eta = 0;
    float totale = 0;
    float pagamento = 0;
    float resto = 0;
    float provvigione = 0;
    float sconto = 0;
    int passw = 0;
    int i = 0;
    int CountBiglietti = 0;

    while (1) // Ciclo infinito per eseguire i menù
    {
        // Selezione della persona
        MenuStart();  // Chiamata della funzione per visualizzare il menù per selezionare l'utente
        scanf("%d", &persona);

        switch (persona)
        {
        case 1:
            while (1) // Ciclo infinito per eseguire il menù utente
            {
                // Menù dell'utente
                menuUtente();  // Chiamata della funzione per visualizzare il menù dell'utente
                scanf("%d", &selezione);

                if (selezione == 0) // Opzione per tornare indietro nel menù
                {
                    break;
                }

                switch (selezione)
                {
                case 1:
                    MenuAcquistaBiglietti(); // Acquisto biglietti

                    scanf("%d", &concerto);
                    
                    if (concerto == 0)
                    {
                        break;
                    }

                    while (concerto < 0 || concerto > 2) // Verifica della selezione del concerto
                    {
                        printf("Scelta non valida! Inserire un numero tra 1 e 2: ");
                        scanf("%d", &concerto);
                    }

                    // Assegnazione dei prezzi dei biglietti in base al cocnerto
                    if (concerto == 1)
                    {
                        prezzo = 50;
                    }
                    else
                    {
                        prezzo = 70;
                    }

                    system("cls");
                    printf("Hai scelto il concerto %d.\n", concerto); // Conferma della selezione

                    MenuNumeroBiglietti(); // Chiamata della funzione per visualizzare il menù della richiesta del numero di biglietti che si vogliono acquistare
                    scanf("%d", &biglietti); // Richietsa del numero di biglietti desiderati

                    CountBiglietti += biglietti; // Premio di 50 euro aggiunto alla provvigione ogni 100 biglietti venduti
                    if (CountBiglietti - 100 == 0)
                    {
                        provvigione += 50;
                        CountBiglietti = 0; // Reset del counter una volta raggiunti i 100 biglietti venduti
                    }

                    for (i = 0; i < biglietti; i++) // Ciclo for per numerare i biglietti
                    {
                        MenuEta(); // Chiamata della funzione per visualizzare il menù della richiesta dell'età di appartenenza
                        printf("Inserire l'eta' per il biglietto %d: ", i + 1);
                        scanf("%d", &eta);

                        while (eta < 0 || eta > 100) // Verifica delletà compresa tra 1 anno e i 99 anni
                        {
                            printf("Eta' non valida, riprova: ");
                            scanf("%d", &eta);
                        }

                        if (eta < 14) // Aggiunta del 6% del costo del biglietto alla provvigione totale se si è minori di 14 anni (non compresi)
                        {
                            provvigione += 0.06 * prezzo;
                        }
                        else if (eta > 65) // Aggiunta del 12% del costo del biglietto alla provvigione totale se si è maggiori di 65 anni (non compresi)
                        {
                            provvigione += 0.12 * prezzo;
                        }
                        else // Aggiunta del 15% del costo del biglietto alla provvigione totale se si è maggiori di 14 anni e minori di 65
                        {
                            provvigione += 0.15 * prezzo;
                        }

                        totale = prezzo * biglietti; // Calcolo del prezzo totale
                    }
                    MenuSpesaTotale(); // Chiamata della funzione per visualizzare il menù della spesa totale
                    printf("Il prezzo totale per %d biglietti/o e': %.2f euro\n", biglietti, totale); // Stampa del costo dei o del biglietto

                    // Pagamento dei biglietti
                    MenuPagamento(); // Chiamata della funzione per visualizzare il menù del pagamento in contanti
                    resto = CalcoloPagamento(totale); // Chiamata della funzione per calcolare il resto e/o il denaro insufficiente al completamento della transazione e assegnazione dei tale valore alla variabile "resto"

                    // Stampa del biglietto
                    StampaBiglietto(concerto, biglietti, prezzo, totale); // Chiamata della funzione per visualizzare il biglietto
                    aspettaInput(); // Chiamata della funzione per ricominciare il programma quando richiesto
                    break;

                case 2:
                    MenuListinoBiglietti(); // Chiamata della funzione per visualizzare il menù con i concerti disponibili
                    aspettaInput(); // Chiamata della funzione per ricominciare il programma quando richiesto
                    break;

                default:
                    printf("Scelta non valida.\n");
                    break;
                }
            }
            break;

        case 2:
            MenuLogIn(); // Chiamata della funzione per visualizzare il menù del login dell'operatore
            VerificaPassw(passw); // Chiamata della funzione per verificare la password
            system("cls");

            menuOperatore(); // Chiamata della funzione per visualizzare il menù dell'operatore
            scanf("%d", &selezione);
            switch (selezione)
            {
            case 1:
                MenuVisProvvigione(provvigione); // Chiamata della funzione per visualizzare il menù contenete la provvigione totale
                aspettaInput(); // Chiamata della funzione per ricominciare il programma quando richiesto
                break;

            case 2:
                MenuRitProvvigione(provvigione, passw); // Chiamata della funzione per visualizzare il menù contenete la provvigione totale da ritirare
                provvigione = 0; // Reset della provvigione una volta ritirata
                aspettaInput(); // Chiamata della funzione per ricominciare il programma quando richiesto
                break;

            default:
                printf("Scelta non valida.\n");
                break;
            }
            break;

        default:
            printf("Scelta non valida.\n");
            break;
        }
    }
    return 0;
}