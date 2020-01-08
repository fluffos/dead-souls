#ifndef __LETTERS_H
#define __LETTERS_H

protected private int valid_access();
string create_letter(string str);
protected private void save_letter();
protected private int restore_letter(string id);
string query_letter(string id);
void delete_folder(string who, string folder, string id);
void add_folder(string who, string folder, string id);
protected void manage_letters();
protected void manage_postal();

#endif /* __LETTERS_H */
