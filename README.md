Program #1

Name: Umar Balogun Mohammed

COSC 2030

Section # 11

Competing: YES

Best run time: 967.53 on the Linux.
  To Compile: g++ ProgAss1.cpp

Anything that doesn't work: The averages seem to be off. Otherwise, it's all good.


---
grading 84/100<BR>
* github, compiles, and  run (10 points ) yes
  * seg fault points taken below.
* cover page correct (2 points) yes
* readme updated and correct (2 points) yes
* data structure is an Linked list (25 points) issues.
  * issues in the data structure like the destructor no
  * the class is fine even the fine. but then it not used for another version outside fo the class.  -10
    * the find spec'd that it had to be in the class.
* cleaword method ( 12 points) yes
  * but static cast to int is not needed.  char == char is perfectly legal.
* read dictionary (5 points)
  * you read loop is wrong.  Read the file bfore the loop, then check if end of file, then at the bottom of the loop read again. -1
  * calls clean word
* reads book (5 points) almost
  * read loop error again. -1
  * calls clean word
* skipped correct ( 5 points) likely.
* spelling checking code correct (10 points) no -5
  * you are to use the find in the linklist class, not write in the spell check...
    * I will tell you the idea was sound and it would have been fast, but poorly written.
  * dies on the first misppelled word, ebook.  so this code never actually worked.
* compare counts are correct (10 points) could be.
* format/output correct (10 points) likely.
  * spelled and misspelled
  * misspelled file? likely.
* timing code and run time (4 points) yes
* competing, extra credit: DQ'd.

and Notes:<BR>
* compiles, runs on PIs and then seg faults.  DQ'd
* on fish, also seg faults right after printing dictionary size.
 
