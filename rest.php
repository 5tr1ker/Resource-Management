<?php 
    include("../_inc/dbconn.php");

    $post_data = file_get_contents("php://input");
    $R = json_decode($post_data, true);
    
    $hardware = $R["hardware"];
    $software = $R["software"];
    $uuidData = $R['ulid'];

    // DB에 존재하는 SoftWare 정보 제거
    $delsql = "DELETE FROM `ITM_SOFTWARE` WHERE ASS_IDX = '$uuidData'";
    $result = mysqli_query($dbconn, $delsql);
    
    // Software 정보 삽입
    foreach($software as $row) {
        $softwareName = $row['name'];
        $softwareCom = $row['vendor'];
        $softwareVer = $row['version'];
        $sql = "INSERT INTO `ITM_SOFTWARE`(`ASS_IDX`, `SW_NAME`, `SW_COM`, `SW_VER`) VALUES ('$uuidData','$softwareName','$softwareCom','$softwareVer')";
        $result = mysqli_query($dbconn, $sql);
    }

    // DB에 존재하는 HardWare 정보 제거
    $delsql2 = "DELETE FROM `ITM_HARDWARE` WHERE ASS_IDX = '$uuidData'";
    $result = mysqli_query($dbconn, $delsql2);

    $baseBoard = $hardware["baseBoard"];
    $cpu = $hardware["cpu"];
    $os = $hardware["os"];
    $uuid = $hardware["uuid"];
    $newLine = "\n";

    $hdd = "";
    foreach($hardware["hdd"] as $row) {
        $hdd = $hdd.$row.$newLine;
    }

    $memory = "";
    foreach($hardware["memory"] as $row) {
        $memory = $memory.$row.$newLine;
    }

    $gpu = "";
    foreach($hardware["gpu"] as $row) {
        $gpu = $gpu.$row.$newLine;
    }
    
    // Hardware 정보에 데이터 삽입
    $sql2 = "INSERT INTO `ITM_HARDWARE`(`ASS_IDX`, `OS`, `CPU`, `BASEBOARD`, `MEMORY`, `DISK`, `GRAPHICS`, `UUID`) VALUES ('$uuidData','$os','$cpu','$baseBoard','$memory','$hdd','$gpu','$uuid')";
    mysqli_query($dbconn, $sql2);
?>