/*
 * file: database.h
 * authors: QZ & Carter S. Levinson
 * status: working
 */

#ifndef DATABASE_H 
#define DATABASE_H
/* do we want to expose this pointer in interface?*/
//sqlite3 *DB;
int init_db();
void destroy_db(); 
int log_write(char *, char *, size_t);
#endif /* DATABASE_H */
