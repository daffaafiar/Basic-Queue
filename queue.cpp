#include "queue.h"

void createPlayList_1301213215(playListLagu &Q){
    Head(Q) = nil;
    Tail(Q) = nil;
}

void createElement_1301213215(infotype laguBaru, adr &pLagu){
    next(pLagu) = nil;
    info(pLagu) = laguBaru;
}

void enqueue_1301213215(playListLagu &Q, adr pLagu){
    if(Head(Q) == nil && Tail(Q) == nil){
        Head(Q) = pLagu;
        Tail(Q) = pLagu;
    }else{
        next(Tail(Q)) = pLagu;
        Tail(Q) = pLagu;
    }
}

void dequeue_1301213215(playListLagu &Q, adr &pLagu){
    if(Q.Head == nil && Q.Tail == nil){
        cout << "Queue kosong!!" << endl;
    }else{
        pLagu = Head(Q);
        Head(Q) = next(pLagu);
        next(pLagu) = nil;
    }
}

void showSemuaLagu_1301213215(playListLagu Q){
    adr p = Head(Q);
    while(p != nil){
        cout << "Artis : " << info(p).artis << endl;
        cout << "Judul : " << info(p).judul << endl;
        p = next(p);
    }
}
