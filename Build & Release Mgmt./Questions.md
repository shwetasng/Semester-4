## Questions
- Ques1. use of Maven, Jenkins.
- Ques2. what is project url and repository url?
- Ques3. Examples of Source Code Management?
- Ques4. Search about Nexus Repository Manager.
- Ques5. What is VPN its uses, advantages and names of companies providing this facility.
- Ques6. What is yml file?
- Ques7. What is Slack application?--> its uses and how can it be used?
- Ques8. Search about how inside one github repository more repo can be created and more ownership can be generated somewhat like one user inside already existing user.
- Ques9. What is VDI?
- Ques10. Search about METAVERSE....VR/AR/XR


## Questions from Exam POV:
1. what is maven?

Maven is a popular open-source build tool developed by the Apache Group to build, publish, and deploy several projects at once for better project management. The tool provides allows developers to build and document the lifecycle framework. 
its purpose is to provide developers with:
A comprehensive, maintainable, reusable, and simple model for projects. and 
A set of tools and plug-ins that can interact with the declarative model.

Maven is chiefly used for Java-based projects, helping to download dependencies, which refers to the libraries or JAR files. The tool helps get the right JAR files for each project as there may be different versions of separate packages. 

Project Object Model (POM), which is an XML file that has all the information regarding project and configuration details. The POM has the description of the project, details regarding the versioning, and configuration management of the project. The XML file is located in the project home directory. When you execute a task, Maven searches for the POM in the current directory.


2. how is maven different from gradle?

| Maven | Gradle |
| --- | --- |
| Maven is based on developing pure Java language-based software. |Gradle is based on developing domain-specific language projects. |
| It uses Extensible Markup Language(XML) for creating project structure. | It uses a Groovy-based Domain-specific language(DSL) for creating project structure. |
|Developing applications in a given time limit.| Developing applications by adding new features to them.|
|It does not create local temporary files during software creation, and is hence – slower.| It performs better than maven as it optimized for tracking only current running task.|
|	It is necessary to compile.| It avoids compilation.|
|This tool is a known tool for many users and is easily available.| It is a new tool, which requires users to spend a lot of time to get used to it.|
|This tool serves a limited amount of developers and is not that customizable.| This tool is highly customizable as it supports a variety of IDE’s|
|It supports software development in Java, Scala, C#, and Ruby.| It supports software development in Java, C, C++, and Groovy.|

3. maven vs gradle vs ant

| Maven | Gradle | Ant |
| --- | --- | --- |
|  |  |  |

4. what do you understand by build.

A build is a version of a program that, as a rule, is a pre-release version and is identified by a build number rather than by a release number.

Simply put, a software build is a set of executable code that is ready for use by customers. The DevOps team compiles the source code, such as code in Java or C++, into binaries to make sure it's functional and test code quality before committing it.



5. explain the concept of build and release management.

Build and release management are two related but distinct processes in software development.

Build management refers to the process of creating a software build from source code. This includes compiling the code, running tests, and packaging the software into a distributable format, such as a JAR file. Build management also includes managing dependencies, resolving conflicts, and ensuring that the software build is consistent and reproducible. The goal of build management is to create a stable and reliable software build that can be tested and deployed.

Release management, on the other hand, refers to the process of delivering the software build to end-users. This includes packaging the software in a format that is easy to install, creating release notes, and ensuring that the software is ready for production use. Release management also involves coordinating with stakeholders, such as product owners and customers, to ensure that the release meets their requirements and expectations.

Effective build and release management is crucial for ensuring that software is delivered on time, within budget, and with high quality. This involves careful planning, documentation, and communication, as well as the use of automated tools and processes to streamline the build and release process. In addition, build and release management should be integrated into the overall software development lifecycle, from planning and development to testing and deployment.

In summary, build and release management are two important processes in software development. Build management involves creating a software build from source code, while release management involves delivering the software build to end-users. Effective build and release management requires careful planning, documentation, and communication, as well as the use of automated tools and processes to streamline the process.

6. lifecycle of maven build.

The Maven build process follows a predefined set of phases that together constitute the build lifecycle. The build lifecycle is a sequence of phases that Maven executes in order to build and package a project. Each phase represents a specific stage of the build process.

The Maven build lifecycle consists of three built-in lifecycles, each of which has a set of predefined phases:

Clean lifecycle: This lifecycle removes all the generated files from the previous build. The phases in this lifecycle are:

- pre-clean: Execute processes needed prior to the actual cleaning.
- clean: Remove all files generated by the previous build.
- post-clean: Execute processes needed to finalize the cleaning process.

Default lifecycle: This lifecycle handles the build process. The phases in this lifecycle are:

- validate: Validate the project is correct and all necessary information is available.
- compile: Compile the source code of the project.
- test: Test the compiled source code using a suitable unit testing framework.
- package: Package the compiled code in its distributable format, such as a JAR, WAR or EAR.
- verify: Run any checks on results of integration tests to ensure quality criteria are met.
- install: Install the package into the local repository, for use as a dependency in other projects.
- deploy: Copy the final package to the remote repository for sharing with other developers and projects.

Site lifecycle: This lifecycle generates documentation about the project. The phases in this lifecycle are:

- pre-site: Execute processes needed prior to generating the site documentation.
- site: Generate the site documentation for this project.
- post-site: Execute processes needed to finalize the site documentation generation.
- site-deploy: Deploy the generated site documentation to a remote repository for sharing with other developers and projects.

Each phase in a lifecycle is executed in sequence, and each phase must complete successfully before the next phase can begin. Maven uses a default set of plugins to execute the phases, but these can be customized to fit specific project requirements.

In summary, the Maven build lifecycle is a predefined set of phases that Maven executes in order to build and package a project. The build lifecycle consists of three built-in lifecycles, each of which has a set of predefined phases.

7. what do you understand by maven archetype?

In software development, a Maven archetype is a template or a blueprint that provides a starting point for creating a new project. An archetype includes the basic structure, configuration, and dependencies required for the project, and is typically designed to address a specific use case or project type. Archetypes can be thought of as pre-defined project templates that developers can use to quickly set up new projects with a pre-configured set of files, directories, and dependencies.

Maven is a build automation tool used primarily for Java projects. It provides a way to manage project dependencies and build processes, and includes a vast library of pre-built plugins and archetypes that can be used to quickly create new projects. Using an archetype can save developers significant time and effort by providing a pre-configured starting point for a new project, rather than having to create everything from scratch.

8. give examples and utility of maven archetype

In Apache Maven, an archetype is a template project that can be used to create new Maven projects with pre-configured settings, directory structure, and dependencies. Archetypes can be used to jump-start new projects and save time by providing a starting point for common project types.

Here are some examples of Maven archetypes and their utility:

quickstart: This archetype creates a simple Java project with a single class and a main method. It's useful for creating small, standalone applications or for learning the basics of Maven.

webapp: This archetype creates a basic web application with a pre-configured web.xml file and a directory structure for web resources. It's useful for creating web applications with servlets and JSPs.

junit: This archetype creates a Maven project with the JUnit testing framework pre-configured. It's useful for creating unit tests for Java classes.

spring-mvc: This archetype creates a Spring MVC web application with pre-configured settings for Spring, Hibernate, and other popular frameworks. It's useful for creating enterprise-level web applications.

To create a new project from an archetype, you can use the "mvn archetype:generate" command in the terminal, and choose the archetype from the list of available options. Maven will create a new project with the selected archetype and all the necessary settings, dependencies, and directory structure.

In summary, Maven archetypes provide a quick and easy way to create new Maven projects with pre-configured settings, directory structure, and dependencies. They save time by providing a starting point for common project types, and can be easily customized to fit specific project requirements.

9. different types of repositories in maven.
10. explain the structure of repositories.

11. explain settings.xml and POM.xml

In Apache Maven, both the settings.xml and pom.xml files are XML-based configuration files that play important roles in building and managing Maven projects. However, they serve different purposes.

settings.xml: The settings.xml file is a user-specific configuration file that provides customization of the Maven build process. It contains information such as repository locations, server credentials, and build profiles. This file is located in the Maven installation directory under the conf folder, but can also be customized at the user level by placing a copy of it in the user's home directory (in the .m2 folder). The settings.xml file is typically used to configure Maven for specific environments, such as local development, integration testing, or deployment to a production environment.

pom.xml: The pom.xml file is a Project Object Model (POM) file that describes the configuration of a Maven project. It includes information such as the project's name, version, group ID, dependencies, plugins, and build settings. The pom.xml file is located in the root directory of the project and is used to define the project's structure and dependencies, as well as to configure the build process. When a Maven project is built, the pom.xml file is used to resolve dependencies, compile source code, run tests, and package the resulting artifacts.

In summary, while the settings.xml file is used to customize the Maven build process at the user level, the pom.xml file is used to define the configuration of a specific Maven project. Both files are important for configuring and building Maven projects, but serve different purposes.

12. what is a parent POM file?

In Apache Maven, a parent POM (Project Object Model) file is an XML file that defines common configuration information for a set of related Maven projects. It is used to provide a central point for managing common project information such as the project's version, group ID, and dependencies.

When a Maven project inherits from a parent POM, it automatically inherits the configuration defined in the parent. This allows you to share common configuration across multiple projects without duplicating the same configuration in each project's POM.

To use a parent POM in a Maven project, you include the parent element in the child project's POM and specify the location of the parent POM. When you build the child project, Maven will first resolve the parent POM and then use its configuration to build the child project.

Parent POMs are commonly used in multi-module Maven projects where multiple Maven projects share the same configuration. They can also be used in a single project to centralize configuration and avoid duplication.

13. different types of POM files

In Apache Maven, there are three types of POM (Project Object Model) files:

Parent POM: A parent POM is an XML file that defines common configuration information for a set of related Maven projects. It is used to provide a central point for managing common project information such as the project's version, group ID, and dependencies.

Project POM: A project POM is an XML file that defines the configuration for a single Maven project. It includes information such as the project's name, version, group ID, dependencies, and plugins.

Super POM: The Super POM is the default POM file that Maven uses as the parent of all POM files. It contains default configuration settings that are inherited by all Maven projects unless overridden by a project-specific POM. The Super POM is provided by the Maven installation and can be found in the Maven installation directory under the conf folder.

Note that while the Super POM is not a POM file that you create or modify, it is still an important concept to understand as it sets default values for Maven projects and can affect how your project is built
 

## PYQs
1. What is the difference between Build and Release? Explain any One Activity of
Build Management. 
2. “AI & ML will foster DevOps growth”. Do you agree with this statement? Write
some technical points of your agreement or disagreement of this statement. 
3. What is the Significance of Apache Maven Tool? Write any four Build commands
used in Maven with specifications.
4. Explain Release Planning and Release Authorization activities of Release 
Management Process. 
5. Explain following Maven Goals in detail.
a) Clean Goal
b) Perform Goal
6. What do you mean by Transitive Dependencies? Explain various features of 
Transitive Dependencies.
7. Define Build Life Cycle in Detail. Discuss various phases of Build (Default) Life 
cycle of a Maven Project. Relate different Goals in corresponding phases of Build 
Life Cycle. 
8. What is the Significance of Source Code Repository? Differentiate between CVS and
SVN. Explain following source code repositories with their comparison.
a) Github
b) BitBucket
9. Maven is more superior to Ant tool. Explain its core features which makes it more
popular than other tools in same category.
10. Explain any Four Major development and deployment problems solved by a Build
Management Tool like Maven, Ant etc.
11. Write a short note on Process Documentation for a software Project.
12. Why POM file is also known as the configuration file of Maven? Explain its
significance in Maven Build Management Tool. Explain any two major component
of Project Object Model.
13. What is a Build? What are the various activities involved in Build Management 
Process. Explain with Example.
14. What do you mean by Dependency Scope? Explain various types of Dependency 
Scopes in detail.
15. Explain following type of documentation in detail.
a) System Documentation
b) User Documentation
16. What are three Life Cycles in Maven? Discuss various phases of clean Life Cycle of 
a Maven Project. Relate different Goals in corresponding phases of Clean Life 
Cycle. 
17. What are Repository and Dependency in Maven? Explain with an example the 
following Repositories used for Maven.
a) Local Repository
b) Central Repository
18. What is the Difference between Documentation and Reporting? What is the significance 
of Site Plugin and Site Goal?
19. Why version control is important? Differentiate between CVS and SVN.
20. What are the five major Environments in DevOps? Explain any two environments in 
brief.


