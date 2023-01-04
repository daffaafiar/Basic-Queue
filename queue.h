#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
#include <iostream>

using namespace std;

#define next(Q) (Q)->next
#define info(Q) (Q)->info
#define Head(Q) ((Q).Head)
#define Tail(Q) ((Q).Tail)
#define nil NULL

struct infotype{
    string artis;
    string judul;
};

typedef struct element *adr;

struct element{
    infotype info;
    adr next;
};

struct playListLagu{
    adr Head;
    adr Tail;
};

void createPlayList_1301213215(playListLagu &Q);
void createElement_1301213215(infotype laguBaru, adr &pLagu);
void enqueue_1301213215(playListLagu &Q, adr pLagu);
void dequeue_1301213215(playListLagu &Q, adr &pLagu);
void showSemuaLagu_1301213215(playListLagu Q);

#endif // QUEUE_H_INCLUDED
