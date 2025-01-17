#include "patientNode.h"
#include <string>

using namespace std;

class PatientQueue
{
private:
  PatientNode *front;
  PatientNode *back;
  int count;
  // int MAX_SIZE = 99;

  PatientList();
  Patient *searchPatient(string patientName) const;
  Patient *getFront() const;
  Patient *getBack() const;
  int getListLength() const;
  void listPatients() const;
  void addPatient(Patient *newPatient);
  void deletePatient(string patientName);
  void destroyQueue();
  bool isQueueEmpty();
  // bool isQueueFull();
};