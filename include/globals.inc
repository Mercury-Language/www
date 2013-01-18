<?php
	$installed_path="/home/mercury/mercury5/installed_w3";

	$current_release="11.07.1";
	$next_beta_version="12.08";

	$release_doc_dir="$root/information/doc-release";
	$latest_doc_dir="$root/information/doc-latest";
	$ref_man_release="$release_doc_dir/mercury_ref/index.html";
	$ref_man_latest="$latest_doc_dir/mercury_ref/index.html";
	$user_guide_release="$release_doc_dir/mercury_user_guide/index.html";
	$user_guide_latest="$latest_doc_dir/mercury_user_guide/index.html";
	$library_man_release="$release_doc_dir/mercury_library/index.html";
	$library_man_latest="$latest_doc_dir/mercury_library/index.html";
	$trans_guide_release="$release_doc_dir/mercury_trans_guide/index.html";
	$trans_guide_latest="$latest_doc_dir/mercury_trans_guide/index.html";
	$faq_release="$release_doc_dir/mercury_faq/index.html";
	$faq_latest="$latest_doc_dir/mercury_faq/index.html";

	$rotd_basedir="download/files/beta-releases/rotd";
	$rotd_files_path="$installed_path/$rotd_basedir";
	exec("cat $rotd_files_path/latest-unstable-version", $exec_output);
	$rotd_version=$exec_output[0];
	
 	$ftp_domain="ftp.mercury.csse.unimelb.edu.au";
 	$www_domain="<WWW_DOMAIN>";
?>
