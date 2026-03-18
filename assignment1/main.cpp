/*
 * CS106L Assignment 1: SimpleEnroll
 * Created by Fabio Ibanez with modifications by Jacob Roberts-Baca.
 *
 * Welcome to Assignment 1 of CS106L! Please complete each STUDENT TODO
 * in this file. You do not need to modify any other files.
 *
 * Students must implement: parse_csv, write_courses_offered,
 * write_courses_not_offered
 */
/* CS106L 作业 1: SimpleEnroll
由 Fabio Ibanez 创建，Jacob Roberts-Baca 修改。

欢迎来到 CS106L 的作业 1！请完成本文件中的每个“学生待办”事项。
你不需要修改任何其他文件。

学生必须实现：parse_csv、write_courses_offered、write_courses_not_offered 
*/

#include <algorithm>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

const std::string COURSES_OFFERED_PATH = "student_output/courses_offered.csv";
const std::string COURSES_NOT_OFFERED_PATH = "student_output/courses_not_offered.csv";

/**
 * Represents a course a student can take in ExploreCourses.
 * You must fill in the types of the fields in this struct.
 * Hint: Remember what types C++ streams work with?!
 */
// 表示学生在 ExploreCourses 中可以选修的课程。
// 你必须填充此结构体中字段的类型。
// 提示：记住 C++ 流可以处理哪些类型？！
struct Course {
  /* STUDENT TODO */ std::string title;
  /* STUDENT TODO */ std::string number_of_units;
  /* STUDENT TODO */ std::string quarter;
};

/**
 * (STUDENT TODO) Look at how the main function (at the bottom of this file)
 * calls `parse_csv`, `write_courses_offered`, and `write_courses_not_offered`.
 * Modify the signatures of these functions so that they work as intended, and then delete this
 * comment!
 */
// (学生待办) 查看 main 函数（在本文件底部）如何调用 `parse_csv`、`write_courses_offered`
// 和 `write_courses_not_offered`。修改这些函数的签名，使其按预期工作，然后删除此注释！

/**
 * Note:
 * We need to #include utils.cpp _after_ we declare the Course struct above
 * so that the code inside utils.cpp knows what a Course is.
 * Recall that #include literally copies and pastes file contents.
 */
// 注意：
// 我们需要在声明上面的 Course 结构体 _之后_ 再 #include utils.cpp，
// 这样 utils.cpp 中的代码才知道 Course 是什么。
// 回想一下，#include 实际上就是复制粘贴文件内容。
#include "utils.cpp"

/**
 * This function should populate the `courses` vector with structs of type
 * `Course`. We want to create these structs with the records in the courses.csv
 * file, where each line is a record!
 *
 * Hints:
 * 1) Take a look at the split function we provide in utils.cpp
 * 2) Each LINE is a record! *this is important, so we're saying it again :>)*
 * 3) The first line in the CSV defines the column names, so you can ignore it!
 *
 * @param filename The name of the file to parse.
 * @param courses  A vector of courses to populate.
 */
// 此函数应使用 `Course` 类型的结构体填充 `courses` 向量。
// 我们要用 courses.csv 文件中的记录创建这些结构体，文件中的每一行都是一条记录！
//
// 提示：
// 1) 查看我们在 utils.cpp 中提供的 split 函数
// 2) 每一行都是一条记录！*这很重要，所以我们再说一遍 :>)*
// 3) CSV 中的第一行定义了列名，所以你可以忽略它！
//
// @param filename 要解析的文件名。
// @param courses  要填充的课程向量。
void parse_csv(std::string filename, std::vector<Course> &courses) {
  /* (STUDENT TODO) Your code goes here... */
  // (学生待办) 你的代码写在这里...
  std::ifstream files(filename);
  if(files.is_open()) {
    std::string linestr;
    int flag = 0;
    while(std::getline(files,linestr)) {
      if(!flag) {
        flag ++;
        continue;
      }
      auto tokens_for_line = split(linestr,',');
      courses.push_back({tokens_for_line[0],tokens_for_line[1],tokens_for_line[2]});
    } 
  }
  files.close();
}

/**
 * This function has TWO requirements.
 *
 * 1) Write the courses that are offered to the file
 * "student_output/courses_offered.csv"
 *
 * 2) Delete the courses that are offered from the `all_courses` vector.
 * IMPORTANT: do this after you write out to the file!
 *
 * HINTS:
 * 1) Keep track of the classes that you need to delete!
 * 2) Use the delete_elem_from_vector function we give you!
 * 3) Remember to write the CSV column headers at the beginning of the output!
 *    See courses.csv for reference.
 *
 * @param all_courses A vector of all courses gotten by calling `parse_csv`.
 *                    This vector will be modified by removing all offered courses.
 */
// 此函数有两个要求。
//
// 1) 将开设的课程写入文件 "student_output/courses_offered.csv"
//
// 2) 从 `all_courses` 向量中删除开设的课程。
// 重要提示：在写入文件后再执行此操作！
//
// 提示：
// 1) 跟踪你需要删除的课程！
// 2) 使用我们提供的 delete_elem_from_vector 函数！
// 3) 记得在输出文件的开头写入 CSV 列标题！
//    参考 courses.csv。
//
// @param all_courses 通过调用 `parse_csv` 获得的所有课程的向量。
//                    此向量将通过删除所有开设课程而被修改。
void write_courses_offered(std::vector<Course> &all_courses) {
  /* (STUDENT TODO) Your code goes here... */
  // (学生待办) 你的代码写在这里...
}

/**
 * This function writes the courses NOT offered to the file
 * "student_output/courses_not_offered.csv".
 *
 * This function is ALWAYS called after the `write_courses_offered` function.
 * `unlisted_courses` will trivially contain classes that are not offered
 * since you delete offered classes from `all_courses` in the
 * `write_courses_offered` function.
 *
 * HINT: This should be VERY similar to `write_courses_offered`
 *
 * @param unlisted_courses A vector of courses that are not offered.
 */
// 此函数将未开设的课程写入文件 "student_output/courses_not_offered.csv"。
//
// 此函数总是在 `write_courses_offered` 函数之后调用。
// `unlisted_courses` 自然包含未开设的课程，
// 因为你在 `write_courses_offered` 函数中从 `all_courses` 删除了开设的课程。
//
// 提示：此函数应与 `write_courses_offered` 非常相似。
//
// @param unlisted_courses 未开设课程的向量。
void write_courses_not_offered(std::vector<Course> &unlisted_courses) {
  /* (STUDENT TODO) Your code goes here... */
  // (学生待办) 你的代码写在这里...
}

int main() {
  /* Makes sure you defined your Course struct correctly! */
  // 确保你正确定义了 Course 结构体！
  static_assert(is_valid_course<Course>, "Course struct is not correctly defined!");

  std::vector<Course> courses;
  parse_csv("courses.csv", courses);

  /* Uncomment for debugging... */
  // 取消注释以进行调试...
  print_courses(courses);

  write_courses_offered(courses);
  write_courses_not_offered(courses);

  return run_autograder();
}