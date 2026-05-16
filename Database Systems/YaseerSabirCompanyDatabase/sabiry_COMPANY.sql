-- phpMyAdmin SQL Dump
-- version 5.1.0
-- https://www.phpmyadmin.net/
--
-- Host: localhost
-- Generation Time: Sep 30, 2025 at 05:23 PM
-- Server version: 8.0.41
-- PHP Version: 7.2.24

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `sabiry_COMPANY`
--

-- --------------------------------------------------------

--
-- Table structure for table `DEPARTMENT`
--

CREATE TABLE `DEPARTMENT` (
  `DName` varchar(15) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL,
  `DNumber` int NOT NULL,
  `Mgr_SSN` char(9) NOT NULL,
  `Mgr_Start_Date` date DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

--
-- Dumping data for table `DEPARTMENT`
--

INSERT INTO `DEPARTMENT` (`DName`, `DNumber`, `Mgr_SSN`, `Mgr_Start_Date`) VALUES
('Headquarters', 1, '888665555', '1981-06-19'),
('Administration', 4, '987654321', '1995-01-01'),
('Research', 5, '333445555', '1988-05-22');

-- --------------------------------------------------------

--
-- Table structure for table `DEPENDENT`
--

CREATE TABLE `DEPENDENT` (
  `E_SSN` char(9) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL,
  `Dependent_Name` varchar(15) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL,
  `Sex` char(1) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci DEFAULT NULL,
  `BDate` date DEFAULT NULL,
  `Relationship` varchar(8) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

--
-- Dumping data for table `DEPENDENT`
--

INSERT INTO `DEPENDENT` (`E_SSN`, `Dependent_Name`, `Sex`, `BDate`, `Relationship`) VALUES
('123456789', 'Alice', 'F', '1988-12-30', 'Daughter'),
('123456789', 'Elizabeth', 'F', '1967-05-05', 'Spouse'),
('123456789', 'Michael', 'M', '1988-01-04', 'Son'),
('333445555', 'Alice', 'F', '1986-04-05', 'Daughter'),
('333445555', 'Joy', 'F', '1958-05-03', 'Spouse'),
('333445555', 'Theodore', 'M', '1983-10-25', 'Son'),
('987654321', 'Abner', 'M', '1942-02-28', 'Spouse');

-- --------------------------------------------------------

--
-- Table structure for table `DEPT_LOCATIONS`
--

CREATE TABLE `DEPT_LOCATIONS` (
  `DNumber` int NOT NULL,
  `DLocation` varchar(15) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

--
-- Dumping data for table `DEPT_LOCATIONS`
--

INSERT INTO `DEPT_LOCATIONS` (`DNumber`, `DLocation`) VALUES
(1, 'Houston'),
(4, 'Stratford'),
(5, 'Bellaire'),
(5, 'Houston'),
(5, 'Sugarland');

-- --------------------------------------------------------

--
-- Table structure for table `EMPLOYEE`
--

CREATE TABLE `EMPLOYEE` (
  `FName` varchar(15) NOT NULL,
  `Minit` char(1) DEFAULT NULL,
  `LName` varchar(15) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL,
  `SSN` char(9) NOT NULL,
  `BDate` date DEFAULT NULL,
  `Address` varchar(30) DEFAULT NULL,
  `Sex` char(1) DEFAULT NULL,
  `Salary` decimal(10,2) DEFAULT NULL,
  `Super_SSN` char(9) DEFAULT NULL,
  `DNO` int NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

--
-- Dumping data for table `EMPLOYEE`
--

INSERT INTO `EMPLOYEE` (`FName`, `Minit`, `LName`, `SSN`, `BDate`, `Address`, `Sex`, `Salary`, `Super_SSN`, `DNO`) VALUES
('John', 'B', 'Smith', '123456789', '1965-01-09', '731 Fondren, Houston, TX', 'M', '30000.00', '333445555', 5),
('Franklin', 'T', 'Wong', '333445555', '1955-12-08', '638 Voss, Houston, TX', 'M', '40000.00', '888665555', 5),
('Joyce', 'A', 'English', '453453453', '1972-07-31', '5631 Rice, Houston, TX', 'F', '25000.00', '333445555', 5),
('Ramesh', 'K', 'Narayan', '666884444', '1962-09-15', '975 Fire Oak, Humble, TX', 'M', '38000.00', '333445555', 5),
('James', 'E', 'Borg', '888665555', '1937-11-10', '450 Stone, Houston, TX', 'M', '55000.00', NULL, 1),
('Jennifer', 'S', 'Wallace', '987654321', '1941-06-20', '291 Berry, Bellaire, TX', 'F', '43000.00', '888665555', 4),
('Ahmad', 'V', 'Jabbar', '987987987', '1969-03-29', '980 Dallas, Houston, TX', 'M', '25000.00', '987654321', 4),
('Alicia', 'J', 'Zelaya', '999887777', '1968-01-19', '3321 Castle, Spring, TX', 'F', '25000.00', '987654321', 4);

-- --------------------------------------------------------

--
-- Table structure for table `PROJECT`
--

CREATE TABLE `PROJECT` (
  `PName` varchar(15) NOT NULL,
  `PNumber` int NOT NULL,
  `PLocation` varchar(15) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci DEFAULT NULL,
  `DNum` int NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

--
-- Dumping data for table `PROJECT`
--

INSERT INTO `PROJECT` (`PName`, `PNumber`, `PLocation`, `DNum`) VALUES
('ProductX', 1, 'Bellaire', 5),
('ProductY', 2, 'Sugarland', 5),
('ProductZ', 3, 'Houston', 5),
('Computerization', 10, 'Stafford', 4),
('Reorganization', 20, 'Houston', 1),
('Newbenefits', 30, 'Stafford', 4);

-- --------------------------------------------------------

--
-- Table structure for table `WORKS_ON`
--

CREATE TABLE `WORKS_ON` (
  `E_SSN` char(9) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL,
  `Pno` int NOT NULL,
  `Hours` decimal(3,1) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

--
-- Dumping data for table `WORKS_ON`
--

INSERT INTO `WORKS_ON` (`E_SSN`, `Pno`, `Hours`) VALUES
('123456789', 1, '32.5'),
('123456789', 2, '7.5'),
('333445555', 2, '10.0'),
('333445555', 3, '10.0'),
('333445555', 10, '10.0'),
('333445555', 20, '10.0'),
('453453453', 1, '20.0'),
('453453453', 2, '20.0'),
('666884444', 3, '40.0'),
('888665555', 20, NULL),
('987654321', 20, '15.0'),
('987654321', 30, '20.0'),
('987987987', 10, '35.0'),
('987987987', 30, '5.0'),
('999887777', 10, '10.0'),
('999887777', 30, '30.0');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `DEPARTMENT`
--
ALTER TABLE `DEPARTMENT`
  ADD PRIMARY KEY (`DNumber`),
  ADD UNIQUE KEY `DName` (`DName`),
  ADD KEY `FK_SSN` (`Mgr_SSN`);

--
-- Indexes for table `DEPENDENT`
--
ALTER TABLE `DEPENDENT`
  ADD PRIMARY KEY (`E_SSN`,`Dependent_Name`);

--
-- Indexes for table `DEPT_LOCATIONS`
--
ALTER TABLE `DEPT_LOCATIONS`
  ADD PRIMARY KEY (`DNumber`,`DLocation`);

--
-- Indexes for table `EMPLOYEE`
--
ALTER TABLE `EMPLOYEE`
  ADD PRIMARY KEY (`SSN`),
  ADD KEY `fk_selfReferenceSuperSSN` (`Super_SSN`),
  ADD KEY `fk_DNO` (`DNO`);

--
-- Indexes for table `PROJECT`
--
ALTER TABLE `PROJECT`
  ADD PRIMARY KEY (`PNumber`),
  ADD UNIQUE KEY `PName` (`PName`),
  ADD KEY `fk_DNum` (`DNum`);

--
-- Indexes for table `WORKS_ON`
--
ALTER TABLE `WORKS_ON`
  ADD PRIMARY KEY (`E_SSN`,`Pno`),
  ADD KEY `fk_PnoToPnumber` (`Pno`);

--
-- Constraints for dumped tables
--

--
-- Constraints for table `DEPARTMENT`
--
ALTER TABLE `DEPARTMENT`
  ADD CONSTRAINT `FK_SSN` FOREIGN KEY (`Mgr_SSN`) REFERENCES `EMPLOYEE` (`SSN`);

--
-- Constraints for table `DEPENDENT`
--
ALTER TABLE `DEPENDENT`
  ADD CONSTRAINT `fk_dependentToESSN` FOREIGN KEY (`E_SSN`) REFERENCES `EMPLOYEE` (`SSN`) ON DELETE CASCADE ON UPDATE CASCADE;

--
-- Constraints for table `DEPT_LOCATIONS`
--
ALTER TABLE `DEPT_LOCATIONS`
  ADD CONSTRAINT `FK_DNumber` FOREIGN KEY (`DNumber`) REFERENCES `DEPARTMENT` (`DNumber`) ON DELETE CASCADE ON UPDATE CASCADE;

--
-- Constraints for table `EMPLOYEE`
--
ALTER TABLE `EMPLOYEE`
  ADD CONSTRAINT `fk_DNO` FOREIGN KEY (`DNO`) REFERENCES `DEPARTMENT` (`DNumber`) ON DELETE CASCADE ON UPDATE CASCADE;

--
-- Constraints for table `PROJECT`
--
ALTER TABLE `PROJECT`
  ADD CONSTRAINT `fk_DNum` FOREIGN KEY (`DNum`) REFERENCES `DEPARTMENT` (`DNumber`) ON DELETE CASCADE ON UPDATE CASCADE;

--
-- Constraints for table `WORKS_ON`
--
ALTER TABLE `WORKS_ON`
  ADD CONSTRAINT `fk_ESSNtoSSN` FOREIGN KEY (`E_SSN`) REFERENCES `EMPLOYEE` (`SSN`) ON DELETE CASCADE ON UPDATE CASCADE,
  ADD CONSTRAINT `fk_PnoToPnumber` FOREIGN KEY (`Pno`) REFERENCES `PROJECT` (`PNumber`) ON DELETE CASCADE ON UPDATE CASCADE;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
