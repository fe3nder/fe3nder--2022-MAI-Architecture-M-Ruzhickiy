DROP TABLE IF EXISTS Person;

CREATE TABLE Person (
    id INT NOT NULL AUTO_INCREMENT, 
    login VARCHAR(256) CHARACTER SET utf8 COLLATE utf8_unicode_ci NOT NULL, 
    first_name VARCHAR(256) CHARACTER SET utf8 COLLATE utf8_unicode_ci NOT NULL, 
    last_name VARCHAR(256) CHARACTER SET utf8 COLLATE utf8_unicode_ci NOT NULL, 
    age INT NOT NULL,
    PRIMARY KEY (id),
    KEY `fn` (`first_name`),
    KEY `ln` (`last_name`)
);


INSERT INTO Person (login, first_name, last_name, age) 
VALUES ('Ivan123', 'Ivan', 'Ivanov', 20);

INSERT INTO Person (login, first_name, last_name, age) 
VALUES ('Oleg3ton', 'Oleg', 'Olegov', 22);

INSERT INTO Person (login, first_name, last_name, age) 
VALUES ('Egor777', 'Egor', 'Ivanov', 19);

INSERT INTO Person (login, first_name, last_name, age) 
VALUES ('AlexBomber', 'Alex', 'Ivanov', 25);