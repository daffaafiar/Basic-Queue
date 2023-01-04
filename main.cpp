#include "queue.h"

using namespace std;

int main()
{
    playListLagu Q;
    int N = 7;  //NIM 1301213215, Kelas IF4502 = 5+2
    int i = 1;
    infotype lagu;
    adr pLagu;

    createPlayList_1301213215(Q);
    while(i <= N){
        cout << "Data Ke " << i << endl;
        cout << "Masukan Artis : ";
        cin >> lagu.artis;
        cout << "Masukan Judul : ";
        cin >> lagu.judul;
        pLagu = new element;
        createElement_1301213215(lagu, pLagu);
        enqueue_1301213215(Q, pLagu);
        i++;
    }
    cout << "Data Sebelum dequeue" << endl;
    showSemuaLagu_1301213215(Q);

    cout << "Data Setelah dequeue" << endl;
    dequeue_1301213215(Q, pLagu);
    showSemuaLagu_1301213215(Q);

    return 0;
}
