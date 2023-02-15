<?php

require ('Mahasiswa.php');

	$student1 = new Mahasiswa('2103842', 'Dicki Fathurohman', 'Male', 'FPMIPA', 'Computer Science');
	
	echo '<hr>';

	echo 'NIM      : ' . $student1->get_nim() . '<br>';
	echo 'Nama     : ' . $student1->get_nama() . '<br>';
	echo 'Gender   : ' . $student1->get_gender() . '<br>';
	echo 'Fakultas : ' . $student1->get_fakultas() . '<br>';
	echo 'Prodi    : ' . $student1->get_prodi() . '<br>';


	$student2 = new Mahasiswa('0221994', 'Park Jin-Young', 'Male', 'FPSD', 'Drama');

	echo '<hr>';

	echo 'NIM      : ' . $student2->get_nim() . '<br>';
	echo 'Nama     : ' . $student2->get_nama() . '<br>';
	echo 'Gender   : ' . $student2->get_gender() . '<br>';
	echo 'Fakultas : ' . $student2->get_fakultas() . '<br>';
	echo 'Prodi    : ' . $student2->get_prodi() . '<br>';

	$student3 = new Mahasiswa('0211992', 'Kim Jong-Dae', 'Male', 'FPSD', 'Music');

	echo '<hr>';

	echo 'NIM      : ' . $student3->get_nim() . '<br>';
	echo 'Nama     : ' . $student3->get_nama() . '<br>';
	echo 'Gender   : ' . $student3->get_gender() . '<br>';
	echo 'Fakultas : ' . $student3->get_fakultas() . '<br>';
	echo 'Prodi    : ' . $student3->get_prodi() . '<br>';

	$student4 = new Mahasiswa('0312004', 'Jang Won-Young', 'Female', 'FPSD', 'Music');

	echo '<hr>';

	echo 'NIM      : ' . $student4->get_nim() . '<br>';
	echo 'Nama     : ' . $student4->get_nama() . '<br>';
	echo 'Gender   : ' . $student4->get_gender() . '<br>';
	echo 'Fakultas : ' . $student4->get_fakultas() . '<br>';
	echo 'Prodi    : ' . $student4->get_prodi() . '<br>';

	$student5 = new Mahasiswa('0291996', 'Sana Minatozaki', 'Female', 'FPBS', 'Korea Literature');

	echo '<hr>';

	echo 'NIM      : ' . $student5->get_nim() . '<br>';
	echo 'Nama     : ' . $student5->get_nama() . '<br>';
	echo 'Gender   : ' . $student5->get_gender() . '<br>';
	echo 'Fakultas : ' . $student5->get_fakultas() . '<br>';
	echo 'Prodi    : ' . $student5->get_prodi() . '<br>';

	$student6 = new Mahasiswa('0281994', 'Jackson Wang', 'Male', 'FPOK', 'Sport');

	echo '<hr>';

	echo 'NIM      : ' . $student6->get_nim() . '<br>';
	echo 'Nama     : ' . $student6->get_nama() . '<br>';
	echo 'Gender   : ' . $student6->get_gender() . '<br>';
	echo 'Fakultas : ' . $student6->get_fakultas() . '<br>';
	echo 'Prodi    : ' . $student6->get_prodi() . '<br>';

	$student7 = new Mahasiswa('0101983', 'Kim Hee-Chul', 'Male', 'FPMIPA', 'Computer Science');

	echo '<hr>';

	echo 'NIM      : ' . $student7->get_nim() . '<br>';
	echo 'Nama     : ' . $student7->get_nama() . '<br>';
	echo 'Gender   : ' . $student7->get_gender() . '<br>';
	echo 'Fakultas : ' . $student7->get_fakultas() . '<br>';
	echo 'Prodi    : ' . $student7->get_prodi() . '<br>';

?>