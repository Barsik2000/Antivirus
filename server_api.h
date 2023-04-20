#include <iostream>

// результаты сканирования
#pragma once
#include <iostream>
#include <string>
using std::string;
// результаты сканирования
#ifndef base_classes
#define base_classes
struct ScanResult {
    int prog_type;
    int prog_name_len;
    char *  prog_name;
};

struct FileData {
    void * data;
    long data_len;
};

struct MalvareRecord {
	int prog_type;
	int prog_name_len;
	char * prog_name;
	int sign_type;
	int sign_len;
	char * sign;
};

struct AntivirusDatabase{
    
};

#endif

namespace serverapi{
	ScanResult * scanData(FileData* data);

	long addRecord(MalvareRecord * sha256_hash, AntivirusDatabase * base);

	MalvareRecord * getRecord(long id, AntivirusDatabase * base);
	
	AntivirusDatabase * openDatabase(FileData * data);
	
	FileData * saveDatabase(AntivirusDatabase * base);

	void deleteRecord(long id, AntivirusDatabase * base);

	void deleteRecord(MalvareRecord * record, AntivirusDatabase * base);

	int getRecordIndex(MalvareRecord * record, AntivirusDatabase * base);
}
