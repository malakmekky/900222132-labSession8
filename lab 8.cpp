#include <iostream>
#include <string>

using namespace std;

class Photo {
protected:
  int id;
  string title;
  string remarks;
  string type;
  string privacy;

public:
  // construct
  Photo(int id, string title, string remarks, string type, string privacy) {
    this->id = id;
    this->title = title;
    this->remarks = remarks;
    this->type = type;
    this->privacy = privacy;
  }
  // getters
  int getId() const { return id; }
  string getTitle() const { return title; }
  string getRemarks() const { return remarks; }
  string getType() const { return type; }
  string getPrivacy() const { return privacy; }
  // setters
  void setId(int id) { this->id = id; }
  void setTitle(string title) { this->title = title; }
  void setRemarks(string remarks) { this->remarks = remarks; }
  void setType(string type) { this->type = type; }
  void setPrivacy(string privacy) { this->privacy = privacy; }
};

class Location : public Photo {
private:
  int id;
  string name;
  string remarks;

public:
  // constructrs
  Location(int id, string name, string remarks, int photo_id, string title,
           string photo_remarks, string type, string privacy)
      : Photo(photo_id, title, photo_remarks, type, privacy) {
    this->id = id;
    this->name = name;
    this->remarks = remarks;
  }
  // getters
  int getId() const { return id; }
  string getName() const { return name; }
  string getRemarks() const { return remarks; }
  // setters
  void setId(int id) { this->id = id; }
  void setName(string name) { this->name = name; }
  void setRemarks(string remarks) { this->remarks = remarks; }
};

class Member : public Photo {
private:
  int id;
  string name;
  string address;
  string contact;

public:
  // constructors
  Member(int id, string name, string address, string contact, int photo_id,
         string title, string photo_remarks, string type, string privacy)
      : Photo(photo_id, title, photo_remarks, type, privacy) {
    this->id = id;
    this->name = name;
    this->address = address;
    this->contact = contact;
  }

  // getters
  int getId() const { return id; }

  string getName() const { return name; }

  string getAddress() const { return address; }

  string getContact() const { return contact; }

  // stters
  void setId(int id) { this->id = id; }

  void setName(string name) { this->name = name; }

  void setAddress(string address) { this->address = address; }

  void setContact(string contact) { this->contact = contact; }
};

class Album : public Photo {
private:
  int id;
  string title;
  string remarks;

public:
  // contructor
  Album(int id, string title, string remarks, string type, string privacy)
      : Photo(0, "", "", type, privacy) {
    this->id = id;
    this->title = title;
    this->remarks = remarks;
  }
};
int main() {
  int id;
  string title, remarks, type, privacy;
  cout << "Enter album ID: ";
  cin >> id;
  cout << "Enter album title: ";
  cin >> title;
  cout << "Enter album remarks: ";
  cin >> remarks;
  cout << "Enter album type: ";
  cin >> type;
  cout << "Enter album privacy: ";
  cin >> privacy;
  Album myAlbum(id, title, remarks, type, privacy);
  cout << "Album title: " << myAlbum.getTitle() << endl;
  cout << "Album remarks: " << myAlbum.getRemarks() << endl;
  cout << "Album type: " << myAlbum.getType() << endl;
  cout << "Album privacy: " << myAlbum.getPrivacy() << endl;

  return 0;
}
