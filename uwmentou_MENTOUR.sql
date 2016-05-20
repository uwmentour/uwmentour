-- phpMyAdmin SQL Dump
-- version 4.0.10.7
-- http://www.phpmyadmin.net
--
-- Host: localhost
-- Generation Time: May 14, 2016 at 11:34 PM
-- Server version: 5.5.34-MariaDB-cll-lve
-- PHP Version: 5.4.31

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;

--
-- Database: `uwmentou_MENTOUR`
--

-- --------------------------------------------------------

--
-- Table structure for table `Alumni`
--

CREATE TABLE IF NOT EXISTS `Alumni` (
  `AlumniID` int(11) NOT NULL AUTO_INCREMENT,
  `PersonID` int(11) NOT NULL,
  `Occupation` varchar(40) DEFAULT NULL,
  `DegreeType` varchar(40) DEFAULT NULL,
  `Degree` varchar(40) DEFAULT NULL,
  `Industry` varchar(40) DEFAULT NULL,
  PRIMARY KEY (`AlumniID`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1 AUTO_INCREMENT=1 ;

-- --------------------------------------------------------

--
-- Table structure for table `Faculty`
--

CREATE TABLE IF NOT EXISTS `Faculty` (
  `FaculyID` int(11) NOT NULL AUTO_INCREMENT,
  `PersonID` int(11) NOT NULL,
  `Department` varchar(40) NOT NULL,
  PRIMARY KEY (`FaculyID`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1 AUTO_INCREMENT=1 ;

-- --------------------------------------------------------

--
-- Table structure for table `MenteeMentor`
--

CREATE TABLE IF NOT EXISTS `MenteeMentor` (
  `MenteeMentorID` int(11) NOT NULL AUTO_INCREMENT,
  `RequesterPersonID` int(11) NOT NULL,
  `RequesteePersonID` int(11) NOT NULL,
  `Accepted` enum('0','1') NOT NULL DEFAULT '0',
  PRIMARY KEY (`MenteeMentorID`),
  KEY `MentorID` (`RequesterPersonID`,`RequesteePersonID`),
  KEY `MenteeID` (`RequesteePersonID`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1 AUTO_INCREMENT=1 ;

-- --------------------------------------------------------

--
-- Table structure for table `Message`
--

CREATE TABLE IF NOT EXISTS `Message` (
  `MessageID` int(11) NOT NULL AUTO_INCREMENT,
  `SenderPersonID` int(11) NOT NULL,
  `ReceiverPersonID` int(11) NOT NULL,
  `MessageText` varchar(5000) NOT NULL,
  `MessageRead` enum('0','1') NOT NULL DEFAULT '0',
  `MessageDate` date NOT NULL,
  PRIMARY KEY (`MessageID`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1 AUTO_INCREMENT=1 ;

-- --------------------------------------------------------

--
-- Table structure for table `Person`
--

CREATE TABLE IF NOT EXISTS `Person` (
  `PersonID` int(11) NOT NULL AUTO_INCREMENT,
  `FirstName` varchar(40) NOT NULL,
  `LastName` varchar(40) NOT NULL,
  `Email` varchar(40) NOT NULL,
  `Password` varchar(40) NOT NULL,
  `UWStatus` varchar(30) NOT NULL,
  `MentoringType` varchar(40) NOT NULL,
  `Language` varchar(30) DEFAULT NULL,
  `About` varchar(5000) DEFAULT NULL,
  `Interest` varchar(5000) DEFAULT NULL,
  `Looking` varchar(5000) DEFAULT NULL,
  `Skills` varchar(40) DEFAULT NULL,
  `ImageFileName` varchar(100) NOT NULL,
  `Notification` datetime DEFAULT NULL,
  `SignUp` datetime NOT NULL,
  `Activated` enum('0','1','2') NOT NULL DEFAULT '0',
  PRIMARY KEY (`PersonID`),
  UNIQUE KEY `Email` (`Email`)
) ENGINE=InnoDB  DEFAULT CHARSET=latin1 AUTO_INCREMENT=24 ;

--
-- Dumping data for table `Person`
--

INSERT INTO `Person` (`PersonID`, `FirstName`, `LastName`, `Email`, `Password`, `UWStatus`, `MentoringType`, `Language`, `About`, `Interest`, `Looking`, `Skills`, `ImageFileName`, `Notification`, `SignUp`, `Activated`) VALUES
(1, 'homer', 'simpson', 'homer@simpsons.com', 'doh', '', '', NULL, NULL, NULL, NULL, NULL, '', '0000-00-00 00:00:00', '2016-05-08 20:22:36', '1'),
(2, 'bart', 'simpson', 'bart@simpsons.com', '123', '', '', NULL, NULL, NULL, NULL, NULL, '', '0000-00-00 00:00:00', '2016-05-08 20:27:32', '0'),
(3, 'lisa', 'simpson', 'lisa@simpsons.com', '123', '', '', NULL, NULL, NULL, NULL, NULL, '', '0000-00-00 00:00:00', '2016-05-08 20:45:25', '0'),
(4, 'ned', 'flanders', 'ned@simpsons.com', 'ok', '', '', NULL, NULL, NULL, NULL, NULL, '', '0000-00-00 00:00:00', '2016-05-08 21:01:17', '0'),
(5, 'sdf', 'sdf', 'sdf@sdlkfjlksd', 'sdf', '', '', NULL, NULL, NULL, NULL, NULL, '', '0000-00-00 00:00:00', '2016-05-08 21:01:43', '0'),
(6, 'john', 'deere', 'john@deere.com', '123', '', '', NULL, NULL, NULL, NULL, NULL, '', '0000-00-00 00:00:00', '2016-05-10 13:48:43', '0'),
(7, 'cool', 'guy', 'jefm206@yahoo.com', '123', '', '', NULL, NULL, NULL, NULL, NULL, '', '0000-00-00 00:00:00', '2016-05-10 14:28:02', '0'),
(8, 'hello', 'kitty', 'someemail@email.com', '123', '', '', NULL, NULL, NULL, NULL, NULL, '', '0000-00-00 00:00:00', '2016-05-10 14:36:33', '0'),
(9, 'hello kitty', 'meow', 'meow@meow.com', '123', '', '', NULL, NULL, NULL, NULL, NULL, '', '0000-00-00 00:00:00', '2016-05-10 14:47:10', '0'),
(10, 'ty', 'bell', 'ty@gmail.com', '123', '', '', NULL, NULL, NULL, NULL, NULL, '', '0000-00-00 00:00:00', '2016-05-10 14:51:20', '0'),
(11, 'hi', 'cool', 'hi@hi.com', '123', '', '', NULL, NULL, NULL, NULL, NULL, '', '0000-00-00 00:00:00', '2016-05-10 14:56:36', '0'),
(12, 'first', 'last', 'first@last.com', '123', '', '', NULL, NULL, NULL, NULL, NULL, '', '0000-00-00 00:00:00', '2016-05-10 15:07:30', '0'),
(13, 'jane', 'smith', 'jane@yahoo.com', '123', '', '', NULL, NULL, NULL, NULL, NULL, '', '0000-00-00 00:00:00', '2016-05-10 15:31:55', '0'),
(14, 'fghkjl', 'gdfh', 'bhgf@bvy.com', '098', '', '', NULL, NULL, NULL, NULL, NULL, '', '0000-00-00 00:00:00', '2016-05-10 15:39:42', '0'),
(15, 'hgjfjgh', 'jlkjgfjhjkh', 'hj@jh.com', '1234', '', '', NULL, NULL, NULL, NULL, NULL, '', '0000-00-00 00:00:00', '2016-05-10 15:43:45', '0'),
(16, 'asd', 'sedfg', 'sdf@dfg.com', '111', '', '', NULL, NULL, NULL, NULL, NULL, '', '0000-00-00 00:00:00', '2016-05-11 01:48:20', '0'),
(17, 'haha', 'hello', 'hello@kittyde.com', '11111', '', '', NULL, NULL, NULL, NULL, NULL, '', NULL, '2016-05-11 02:27:05', '0'),
(18, 'funnycool', 'first', 'first@name.com', '111', '', '', NULL, NULL, NULL, NULL, NULL, '', NULL, '2016-05-11 02:41:10', '0'),
(19, 'super', 'P', 'yyy@email.com', '111', '', '', NULL, NULL, NULL, NULL, NULL, '', NULL, '2016-05-11 23:41:35', '0'),
(20, 'tom', 'd', 'jeffma@cablespeed.com', '111', '', '', NULL, NULL, NULL, NULL, NULL, '', NULL, '2016-05-11 23:46:36', '0'),
(21, 'jonny ', 'appleseed', 'jonny@appleseed.com', '123', '', '', NULL, NULL, NULL, NULL, NULL, '', NULL, '2016-05-12 01:11:37', '1'),
(22, 'pizza', 'dude', 'pizza@dude.com', '111', '', '', NULL, NULL, NULL, NULL, NULL, '', NULL, '2016-05-12 20:25:05', '1'),
(23, 'qewredf', 'sdfs', 'dfjh@.com', '123', '', '', NULL, NULL, NULL, NULL, NULL, '', NULL, '2016-05-13 14:29:45', '0');

-- --------------------------------------------------------

--
-- Table structure for table `Student`
--

CREATE TABLE IF NOT EXISTS `Student` (
  `StudentID` int(11) NOT NULL AUTO_INCREMENT,
  `PersonID` int(11) NOT NULL,
  `Major1` varchar(40) DEFAULT NULL,
  `Major2` varchar(40) DEFAULT NULL,
  `Minor` varchar(40) NOT NULL,
  `Year` varchar(40) DEFAULT NULL,
  `Degree` varchar(40) DEFAULT NULL,
  PRIMARY KEY (`StudentID`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1 AUTO_INCREMENT=1 ;

--
-- Constraints for dumped tables
--

--
-- Constraints for table `MenteeMentor`
--
ALTER TABLE `MenteeMentor`
  ADD CONSTRAINT `MenteeMentor_ibfk_1` FOREIGN KEY (`RequesterPersonID`) REFERENCES `Person` (`PersonID`),
  ADD CONSTRAINT `MenteeMentor_ibfk_2` FOREIGN KEY (`RequesteePersonID`) REFERENCES `Person` (`PersonID`);

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
