/*
 * CS106L Assignment 2: Marriage Pact
 * Created by Haven Whitney with modifications by Fabio Ibanez & Jacob Roberts-Baca.
 *
 * Welcome to Assignment 2 of CS106L! Please complete each STUDENT TODO
 * in this file. You do not need to modify any other files.
 *
 */
/*
 * CS106L 作业 2：婚姻协议
 * 由 Haven Whitney 创建，Fabio Ibanez 和 Jacob Roberts-Baca 修改。
 *
 * 欢迎来到 CS106L 的作业 2！请完成本文件中的每个“学生待办”事项。
 * 你不需要修改任何其他文件。
 *
 */

#include <fstream>
#include <iostream>
#include <queue>
#include <set>
#include <string>
#include <unordered_set>

std::string kYourName = "STUDENT TODO"; // Don't forget to change this!
// 别忘了修改这个！

/**
 * Takes in a file name and returns a set containing all of the applicant names as a set.
 *
 * @param filename  The name of the file to read.
 *                  Each line of the file will be a single applicant's name.
 * @returns         A set of all applicant names read from the file.
 *
 * @remark Feel free to change the return type of this function (and the function
 * below it) to use a `std::unordered_set` instead. If you do so, make sure
 * to also change the corresponding functions in `utils.h`.
 */
/**
 * 接收文件名，返回包含所有申请者姓名的集合。
 *
 * @param filename  要读取的文件名。
 *                  文件的每一行都是一个申请者的姓名。
 * @returns         从文件中读取的所有申请者姓名的集合。
 *
 * @remark 可以随意更改此函数（以及下面的函数）的返回类型，改用 `std::unordered_set`。
 *         如果这样做，请确保同时修改 `utils.h` 中相应的函数。
 */
std::set<std::string> get_applicants(std::string filename) {
  // STUDENT TODO: Implement this function.
  // 学生待办：实现此函数。
}

/**
 * Takes in a set of student names by reference and returns a queue of names
 * that match the given student name.
 *
 * @param name      The returned queue of names should have the same initials as this name.
 * @param students  The set of student names.
 * @return          A queue containing pointers to each matching name.
 */
/**
 * 接收学生姓名集合的引用，并返回一个与给定学生姓名匹配的姓名队列。
 *
 * @param name      返回的姓名队列应与此姓名的首字母相同。
 * @param students  学生姓名集合。
 * @return          包含每个匹配姓名指针的队列。
 */
std::queue<const std::string*> find_matches(std::string name, std::set<std::string>& students) {
  // STUDENT TODO: Implement this function.
   // 学生待办：实现此函数
}

/**
 * Takes in a queue of pointers to possible matches and determines the one true match!
 *
 * You can implement this function however you'd like, but try to do something a bit
 * more complicated than a simple `pop()`.
 *
 * @param matches The queue of possible matches.
 * @return        Your magical one true love.
 *                Will return "NO MATCHES FOUND." if `matches` is empty.
 */
/**
 * 接收指向可能匹配对象的指针队列，并确定唯一真命天子/天女！
 *
 * 你可以按自己喜欢的方式实现此函数，但尽量做一些比简单的 `pop()` 更复杂一点的操作。
 *
 * @param matches 可能匹配对象的队列。
 * @return        你神奇的唯一真爱。
 *                如果 `matches` 为空，则返回 "NO MATCHES FOUND."。
 */
std::string get_match(std::queue<const std::string*>& matches) {
  // STUDENT TODO: Implement this function.
  // 学生待办：实现此函数。
}

/* #### Please don't remove this line! #### */
/* #### 请不要删除此行！ #### */
#include "autograder/utils.hpp"
