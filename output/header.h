#ifndef SPR_GENERATED_HEADER
#define SPR_GENERATED_HEADER 1
class ThreadLocalStorageEntry;
#include "/Users/srikantgudi/SappeurM1/cppMapping/mapping.h"
class SAPPEUR_DLL_EXPORT_A String_16: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
SPRStackArrayConcrete<char,16> _preAllocBuf;
SPRSmartPtr<SPRArray<char> > _extendedBuf;
int _length;
String_16();
String_16(char* stackStartPtr,SPRStackArray<char>& init);
void print(char* stackStartPtr);
void printNoLF(char* stackStartPtr);
void append(char* stackStartPtr,SPRStackArray<char>& str);
void append(char* stackStartPtr,SPRStackArray<char>& str,int pos,int anzahl);
void append(char* stackStartPtr,SPRSmartPtr<SPRArray<char> > buf);
void append(char* stackStartPtr,String_16& other);
void append(char* stackStartPtr,SPRSmartPtr<String_16> other);
void append(char* stackStartPtr,char c);
void append(char* stackStartPtr,int x);
void assign(char* stackStartPtr,SPRStackArray<char>& str);
void assign(char* stackStartPtr,String_16& anderer);
char getAt(char* stackStartPtr,int x);
int capacity(char* stackStartPtr);
int length(char* stackStartPtr);
void clear(char* stackStartPtr);
void clearAndReclaimMemory(char* stackStartPtr);
int lengthOf(char* stackStartPtr,SPRStackArray<char>& str);
int compare(char* stackStartPtr,SPRStackArray<char>& str);
int compare(char* stackStartPtr,String_16& other);
void getKey(char* stackStartPtr,SPRSmartPtr<String_16> key);
int getHashCode(char* stackStartPtr);
void getExtendedBuf(char* stackStartPtr,SPRSmartPtr<SPRArray<char> > extendedBuf);
int equals(char* stackStartPtr,String_16& other);
int equals(char* stackStartPtr,SPRStackArray<char>& other);
void toCharArray(char* stackStartPtr,SPRStackArray<char>& feld);
int asNumber(char* stackStartPtr);
int asNumber(char* stackStartPtr,int radix);
double asDouble(char* stackStartPtr);
void escape(char* stackStartPtr,String_16& escaped,char escape);
void deEscape(char* stackStartPtr,String_16& deescaped,char escape);
int endsWith(char* stackStartPtr,SPRStackArray<char>& end);
int endsWith(char* stackStartPtr,String_16& str2);
void rightOf(char* stackStartPtr,char divider,String_16& oStr);
int startsWith(char* stackStartPtr,SPRStackArray<char>& buf);
void subString(char* stackStartPtr,String_16& oStr,int start,int end);
~String_16();
int isNumberChar(char* stackStartPtr,char c);
int hashCode(char* stackStartPtr);
void ersetzen(char* stackStartPtr,String_16& alt,String_16& neu,String_16& ergebnis);
void unitTest(char* stackStartPtr);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class Hash_String_16: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
static int hash(char* stackStartPtr,String_16& str);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class Compare_String_16: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
static int compare(char* stackStartPtr,String_16& s1,String_16& s2);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class Assigner_String_16: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
static void assign(char* stackStartPtr,String_16& s1,String_16& s2);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class SAPPEUR_DLL_EXPORT_A String_32: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
SPRStackArrayConcrete<char,32> _preAllocBuf;
SPRSmartPtr<SPRArray<char> > _extendedBuf;
int _length;
String_32();
String_32(char* stackStartPtr,SPRStackArray<char>& init);
void print(char* stackStartPtr);
void printNoLF(char* stackStartPtr);
void append(char* stackStartPtr,SPRStackArray<char>& str);
void append(char* stackStartPtr,SPRStackArray<char>& str,int pos,int anzahl);
void append(char* stackStartPtr,SPRSmartPtr<SPRArray<char> > buf);
void append(char* stackStartPtr,String_32& other);
void append(char* stackStartPtr,SPRSmartPtr<String_32> other);
void append(char* stackStartPtr,char c);
void append(char* stackStartPtr,int x);
void assign(char* stackStartPtr,SPRStackArray<char>& str);
void assign(char* stackStartPtr,String_32& anderer);
char getAt(char* stackStartPtr,int x);
int capacity(char* stackStartPtr);
int length(char* stackStartPtr);
void clear(char* stackStartPtr);
void clearAndReclaimMemory(char* stackStartPtr);
int lengthOf(char* stackStartPtr,SPRStackArray<char>& str);
int compare(char* stackStartPtr,SPRStackArray<char>& str);
int compare(char* stackStartPtr,String_32& other);
void getKey(char* stackStartPtr,SPRSmartPtr<String_32> key);
int getHashCode(char* stackStartPtr);
void getExtendedBuf(char* stackStartPtr,SPRSmartPtr<SPRArray<char> > extendedBuf);
int equals(char* stackStartPtr,String_32& other);
int equals(char* stackStartPtr,SPRStackArray<char>& other);
void toCharArray(char* stackStartPtr,SPRStackArray<char>& feld);
int asNumber(char* stackStartPtr);
int asNumber(char* stackStartPtr,int radix);
double asDouble(char* stackStartPtr);
void escape(char* stackStartPtr,String_32& escaped,char escape);
void deEscape(char* stackStartPtr,String_32& deescaped,char escape);
int endsWith(char* stackStartPtr,SPRStackArray<char>& end);
int endsWith(char* stackStartPtr,String_16& str2);
void rightOf(char* stackStartPtr,char divider,String_32& oStr);
int startsWith(char* stackStartPtr,SPRStackArray<char>& buf);
void subString(char* stackStartPtr,String_32& oStr,int start,int end);
~String_32();
int isNumberChar(char* stackStartPtr,char c);
int hashCode(char* stackStartPtr);
void ersetzen(char* stackStartPtr,String_32& alt,String_32& neu,String_32& ergebnis);
void unitTest(char* stackStartPtr);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class Hash_String_32: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
static int hash(char* stackStartPtr,String_32& str);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class Compare_String_32: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
static int compare(char* stackStartPtr,String_32& s1,String_32& s2);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class Assigner_String_32: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
static void assign(char* stackStartPtr,String_32& s1,String_32& s2);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class SAPPEUR_DLL_EXPORT_A String_64: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
SPRStackArrayConcrete<char,64> _preAllocBuf;
SPRSmartPtr<SPRArray<char> > _extendedBuf;
int _length;
String_64();
String_64(char* stackStartPtr,SPRStackArray<char>& init);
void print(char* stackStartPtr);
void printNoLF(char* stackStartPtr);
void append(char* stackStartPtr,SPRStackArray<char>& str);
void append(char* stackStartPtr,SPRStackArray<char>& str,int pos,int anzahl);
void append(char* stackStartPtr,SPRSmartPtr<SPRArray<char> > buf);
void append(char* stackStartPtr,String_64& other);
void append(char* stackStartPtr,SPRSmartPtr<String_64> other);
void append(char* stackStartPtr,char c);
void append(char* stackStartPtr,int x);
void assign(char* stackStartPtr,SPRStackArray<char>& str);
void assign(char* stackStartPtr,String_64& anderer);
char getAt(char* stackStartPtr,int x);
int capacity(char* stackStartPtr);
int length(char* stackStartPtr);
void clear(char* stackStartPtr);
void clearAndReclaimMemory(char* stackStartPtr);
int lengthOf(char* stackStartPtr,SPRStackArray<char>& str);
int compare(char* stackStartPtr,SPRStackArray<char>& str);
int compare(char* stackStartPtr,String_64& other);
void getKey(char* stackStartPtr,SPRSmartPtr<String_64> key);
int getHashCode(char* stackStartPtr);
void getExtendedBuf(char* stackStartPtr,SPRSmartPtr<SPRArray<char> > extendedBuf);
int equals(char* stackStartPtr,String_64& other);
int equals(char* stackStartPtr,SPRStackArray<char>& other);
void toCharArray(char* stackStartPtr,SPRStackArray<char>& feld);
int asNumber(char* stackStartPtr);
int asNumber(char* stackStartPtr,int radix);
double asDouble(char* stackStartPtr);
void escape(char* stackStartPtr,String_64& escaped,char escape);
void deEscape(char* stackStartPtr,String_64& deescaped,char escape);
int endsWith(char* stackStartPtr,SPRStackArray<char>& end);
int endsWith(char* stackStartPtr,String_16& str2);
void rightOf(char* stackStartPtr,char divider,String_64& oStr);
int startsWith(char* stackStartPtr,SPRStackArray<char>& buf);
void subString(char* stackStartPtr,String_64& oStr,int start,int end);
~String_64();
int isNumberChar(char* stackStartPtr,char c);
int hashCode(char* stackStartPtr);
void ersetzen(char* stackStartPtr,String_64& alt,String_64& neu,String_64& ergebnis);
void unitTest(char* stackStartPtr);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class Hash_String_64: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
static int hash(char* stackStartPtr,String_64& str);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class Compare_String_64: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
static int compare(char* stackStartPtr,String_64& s1,String_64& s2);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class Assigner_String_64: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
static void assign(char* stackStartPtr,String_64& s1,String_64& s2);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class SAPPEUR_DLL_EXPORT_A String_128: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
SPRStackArrayConcrete<char,128> _preAllocBuf;
SPRSmartPtr<SPRArray<char> > _extendedBuf;
int _length;
String_128();
String_128(char* stackStartPtr,SPRStackArray<char>& init);
void print(char* stackStartPtr);
void printNoLF(char* stackStartPtr);
void append(char* stackStartPtr,SPRStackArray<char>& str);
void append(char* stackStartPtr,SPRStackArray<char>& str,int pos,int anzahl);
void append(char* stackStartPtr,SPRSmartPtr<SPRArray<char> > buf);
void append(char* stackStartPtr,String_128& other);
void append(char* stackStartPtr,SPRSmartPtr<String_128> other);
void append(char* stackStartPtr,char c);
void append(char* stackStartPtr,int x);
void assign(char* stackStartPtr,SPRStackArray<char>& str);
void assign(char* stackStartPtr,String_128& anderer);
char getAt(char* stackStartPtr,int x);
int capacity(char* stackStartPtr);
int length(char* stackStartPtr);
void clear(char* stackStartPtr);
void clearAndReclaimMemory(char* stackStartPtr);
int lengthOf(char* stackStartPtr,SPRStackArray<char>& str);
int compare(char* stackStartPtr,SPRStackArray<char>& str);
int compare(char* stackStartPtr,String_128& other);
void getKey(char* stackStartPtr,SPRSmartPtr<String_128> key);
int getHashCode(char* stackStartPtr);
void getExtendedBuf(char* stackStartPtr,SPRSmartPtr<SPRArray<char> > extendedBuf);
int equals(char* stackStartPtr,String_128& other);
int equals(char* stackStartPtr,SPRStackArray<char>& other);
void toCharArray(char* stackStartPtr,SPRStackArray<char>& feld);
int asNumber(char* stackStartPtr);
int asNumber(char* stackStartPtr,int radix);
double asDouble(char* stackStartPtr);
void escape(char* stackStartPtr,String_128& escaped,char escape);
void deEscape(char* stackStartPtr,String_128& deescaped,char escape);
int endsWith(char* stackStartPtr,SPRStackArray<char>& end);
int endsWith(char* stackStartPtr,String_16& str2);
void rightOf(char* stackStartPtr,char divider,String_128& oStr);
int startsWith(char* stackStartPtr,SPRStackArray<char>& buf);
void subString(char* stackStartPtr,String_128& oStr,int start,int end);
~String_128();
int isNumberChar(char* stackStartPtr,char c);
int hashCode(char* stackStartPtr);
void ersetzen(char* stackStartPtr,String_128& alt,String_128& neu,String_128& ergebnis);
void unitTest(char* stackStartPtr);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class Hash_String_128: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
static int hash(char* stackStartPtr,String_128& str);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class Compare_String_128: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
static int compare(char* stackStartPtr,String_128& s1,String_128& s2);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class Assigner_String_128: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
static void assign(char* stackStartPtr,String_128& s1,String_128& s2);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class FGString: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
String_16 _content;
FGString(char* stackStartPtr,SPRStackArray<char>& init);
void append(char* stackStartPtr,SPRStackArray<char>& str);
void print(char* stackStartPtr);
int compare(char* stackStartPtr,SPRStackArray<char>& str);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class SAPPEUR_DLL_EXPORT_A AlphaEntry: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
char _c;
int _order;
AlphaEntry();
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class AlphabeticSorter: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
SPRStackArrayConcrete<AlphaEntry,36> _alphabet;
AlphabeticSorter();
int isBelow(char* stackStartPtr,SPRStackArray<char>& a,SPRStackArray<char>& b);
int isBelow(char* stackStartPtr,SPRSmartPtr<String_16> a,SPRSmartPtr<String_16> b);
int isBelow(char* stackStartPtr,SPRStackArray<SPRSmartPtr<String_16> > wordlist,int index,SPRSmartPtr<String_16> pivot);
int isAbove(char* stackStartPtr,SPRStackArray<SPRSmartPtr<String_16> > wordlist,int index,SPRSmartPtr<String_16> pivot);
int ordinal(char* stackStartPtr,char c);
void qsort(char* stackStartPtr,SPRStackArray<SPRSmartPtr<String_16> > wordlist,int lower,int upper);
void qsort(char* stackStartPtr,SPRStackArray<int>& liste,int start,int end);
int elemAt(char* stackStartPtr,SPRStackArray<int>& liste,int pos);
int elemAt(char* stackStartPtr,SPRStackArray<SPRSmartPtr<String_16> > liste,int pos);
int isAboveOrEqualPivot(char* stackStartPtr,SPRStackArray<SPRSmartPtr<String_16> > liste,int pos,SPRSmartPtr<String_16> pivot);
int isBelowOrEqualPivot(char* stackStartPtr,SPRStackArray<SPRSmartPtr<String_16> > liste,int pos,SPRSmartPtr<String_16> pivot);
void test(char* stackStartPtr);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class ThreadInfo: public SPRMTObject {
public:
longlong _threadID;
ThreadInfo();
longlong getThreadID(char* stackStartPtr);
void join(char* stackStartPtr);
void threadMain(char* stackStartPtr);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class PrintfClass: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
String_16 _fstr;
String_128 _outBuf;
int _fstrIdx;
SPRSmartPtr<SPRArray<char> > bufferDyn;
PrintfClass& fstr(char* stackStartPtr,SPRStackArray<char>& str);
PrintfClass& sa(char* stackStartPtr,SPRStackArray<char>& str);
PrintfClass& sa(char* stackStartPtr,int num);
PrintfClass& sa(char* stackStartPtr,double num);
PrintfClass& sa(char* stackStartPtr,float num);
PrintfClass& sa(char* stackStartPtr,String_16& str);
PrintfClass& sa(char* stackStartPtr,SPRSmartPtr<String_16> str);
PrintfClass& sa(char* stackStartPtr,SPRSmartPtr<SPRArray<char> > str);
PrintfClass& sa(char* stackStartPtr,char c);
PrintfClass& saExp(char* stackStartPtr,double num);
void pr(char* stackStartPtr);
void prNoLF(char* stackStartPtr);
void prHex(char* stackStartPtr,char x);
PrintfClass& saDbl(char* stackStartPtr,double d,int w,int dec);
PrintfClass();
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class SPRFile: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
int _handle;
SPRSmartPtr<SPRArray<char> > _readBuffer;
int _readPtr;
int _validBytes;
int _fpos;
SPRFile(char* stackStartPtr,SPRStackArray<char>& path,int readonly);
int systemHandle(char* stackStartPtr);
int read(char* stackStartPtr,int pos,int count,SPRStackArray<char>& buffer);
int read(char* stackStartPtr,int pos,int count,SPRSmartPtr<SPRArray<char> > buffer);
int write(char* stackStartPtr,int pos,int count,SPRStackArray<char>& buffer);
int write(char* stackStartPtr,int pos,int count,SPRSmartPtr<SPRArray<char> > buffer);
int size(char* stackStartPtr);
void close(char* stackStartPtr);
int readLine(char* stackStartPtr,String_16& oLine);
int readChar(char* stackStartPtr,char& out);
~SPRFile();
static void __test(char* stackStartPtr);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class ThreadLocalStorageList: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}

      char* _stackStartPtr;
   
int _entryCount;
SPRStackArrayConcrete<SPRSmartPtr<ThreadLocalStorageEntry>,1000 > _entries;
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class ThreadLocalStorageEntry: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
int _id;
int _dummy;
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class ThreadLocalStorage: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
SPRStackArrayConcrete<SPRSmartPtr<ThreadLocalStorageEntry>,1000 > _entries;
static void getEntry(char* stackStartPtr,int id,SPRSmartPtr<ThreadLocalStorageEntry>& ret);
static void setEntry(char* stackStartPtr,int id,SPRSmartPtr<ThreadLocalStorageEntry> entry);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class SystemTime: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
longlong getMillisecondCounter(char* stackStartPtr);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class CommandlineArgs: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
int numberOfArguments(char* stackStartPtr);
void getArgument(char* stackStartPtr,int idx,String_16& arg);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class SystemConstants: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
SystemConstants();
char getFileSeparator(char* stackStartPtr);
int isWindows(char* stackStartPtr);
int isUnix(char* stackStartPtr);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class SystemControl: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
SystemControl();
void exit(char* stackStartPtr);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class HexPrinter: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
void intToHex(char* stackStartPtr,int x,SPRStackArray<char>& out,int startIndex);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class KeyType4: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
String_16 _vornameNamename;
KeyType4(char* stackStartPtr,String_16& vornameNachname);
KeyType4(char* stackStartPtr,SPRStackArray<char>& vornameNachname);
int compare(char* stackStartPtr,KeyType4& other);
int getHashCode(char* stackStartPtr);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class Hashable4: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
String_16 _Vorname;
String_16 _Nachname;
String_16 _Strasse;
String_16 _Ort;
Hashable4(char* stackStartPtr,SPRStackArray<char>& vorname,SPRStackArray<char>& nachname,SPRStackArray<char>& strasse,SPRStackArray<char>& ort);
void getKey(char* stackStartPtr,SPRSmartPtr<KeyType4>& oKey);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class Hashtable4_Hashable4_KeyType4: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
SPRSmartPtr<SPRArray<SPRSmartPtr<Hashable4> > > _elements;
int _numUsed;
int _readPtr;
int _size;
void insertInternally(char* stackStartPtr,SPRSmartPtr<Hashable4> x);
Hashtable4_Hashable4_KeyType4(char* stackStartPtr,int initialCapacity);
void insert(char* stackStartPtr,SPRSmartPtr<Hashable4> x);
void get(char* stackStartPtr,KeyType4& key,SPRSmartPtr<Hashable4>& oValue);
int numElements(char* stackStartPtr);
void getFirst(char* stackStartPtr,SPRSmartPtr<Hashable4>& oValue);
void getNext(char* stackStartPtr,SPRSmartPtr<Hashable4>& oValue);
void clear(char* stackStartPtr);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class test556661: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class MTSuperClass: public SPRMTObject {
public:
void threadMain(char* stackStartPtr);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class MultiThreadAdmin: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
void turnOffLocking(char* stackStartPtr,SPRSmartPtr<MTSuperClass>& mtObject);
void turnOnLocking(char* stackStartPtr,SPRSmartPtr<MTSuperClass>& mtObject);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class MutexInfo: public SPRMTObject {
public:

    #ifdef WIN32_X86
      HANDLE _win_mutex;
    #endif
    #if defined(GCC_X86) || defined(__clang__)
      pthread_mutex_t* _pmutex;
    #endif
  
MutexInfo();
void threadMain(char* stackStartPtr);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class Mutex: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
SPRSmartPtr<MutexInfo> _mi;
int _isOwner;

    #ifdef WIN32_X86 
      HANDLE _win_mutex;
    #endif
    #if defined(GCC_X86) || defined(__clang__)
      pthread_mutex_t* _pmutex;
    #endif

Mutex();
Mutex(char* stackStartPtr,SPRSmartPtr<MutexInfo> mi);
void lock(char* stackStartPtr);
void unlock(char* stackStartPtr);
MutexInfo* getMutexInfo(char* stackStartPtr);
~Mutex();
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class SemaphoreInfo: public SPRMTObject {
public:

    #ifdef WIN32_X86
      HANDLE _win_mutex;
    #endif
    #if defined(GCC_X86) || defined(__clang__)
      sem_t _sem_t;
    #endif
  
SemaphoreInfo();
void threadMain(char* stackStartPtr);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class Semaphore: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
SPRSmartPtr<SemaphoreInfo> _si;
int _isOwner;

    #ifdef WIN32_X86 
      HANDLE _win_mutex;
    #endif
    #if defined(GCC_X86) || defined(__clang__)
      sem_t* _sem_t;
    #endif

Semaphore();
Semaphore(char* stackStartPtr,SPRSmartPtr<SemaphoreInfo> si);
void P(char* stackStartPtr);
void V(char* stackStartPtr);
SemaphoreInfo* getSemaphoreInfo(char* stackStartPtr);
~Semaphore();
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class NullPtrClassSappeurInternal: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class Input: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
void getString(char* stackStartPtr,String_16& str);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class Benutzer_Umschalter: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
void schalteNach(char* stackStartPtr,int benutzer,int gruppe);
void UnitTest(char* stackStartPtr);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class QM: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
double pow(char* stackStartPtr,double base,double exponent);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class Main: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
int main(char* stackStartPtr);
int IsNumber(char* stackStartPtr,String_16& str);
void convertTemp(char* stackStartPtr);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

void* SPRGeneratedStartThread_ThreadInfo(void* iThreadParam);
void* SPRGeneratedStartThread_SemaphoreInfo(void* iThreadParam);
void* SPRGeneratedStartThread_MTSuperClass(void* iThreadParam);
void* SPRGeneratedStartThread_MutexInfo(void* iThreadParam);
#endif
