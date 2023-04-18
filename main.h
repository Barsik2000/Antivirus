#include <iostream>

// результаты сканирования
class ScanResult {
    long id;
}

class ScanData {
    void * data;
    long data_len;
}

long scanFile(string str, ScanResult * result);

long scanData(ScanData* data, ScanResult * result);

long quarantine(ScanResult*);
