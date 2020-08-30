<project xmlns="com.autoesl.autopilot.project" name="model" top="MaxConvNet">
    <files>
        <file name="../../conv_net_tb.cpp" sc="0" tb="1" cflags=" -Wno-unknown-pragmas" blackbox="false" csimflags=" -Wno-unknown-pragmas"/>
        <file name="../../horse_b.txt" sc="0" tb="1" cflags=" -Wno-unknown-pragmas" blackbox="false" csimflags=" -Wno-unknown-pragmas"/>
        <file name="../../horse_g.txt" sc="0" tb="1" cflags=" -Wno-unknown-pragmas" blackbox="false" csimflags=" -Wno-unknown-pragmas"/>
        <file name="../../horse_r.txt" sc="0" tb="1" cflags=" -Wno-unknown-pragmas" blackbox="false" csimflags=" -Wno-unknown-pragmas"/>
        <file name="softmax.cpp" sc="0" tb="false" cflags="" blackbox="false" csimflags=""/>
        <file name="relu.cpp" sc="0" tb="false" cflags="" blackbox="false" csimflags=""/>
        <file name="pooling.cpp" sc="0" tb="false" cflags="" blackbox="false" csimflags=""/>
        <file name="linear.cpp" sc="0" tb="false" cflags="" blackbox="false" csimflags=""/>
        <file name="conv_net.cpp" sc="0" tb="false" cflags="" blackbox="false" csimflags=""/>
        <file name="conv_net.h" sc="0" tb="false" cflags="" blackbox="false" csimflags=""/>
        <file name="conv.cpp" sc="0" tb="false" cflags="" blackbox="false" csimflags=""/>
        <file name="biases.h" sc="0" tb="false" cflags="" blackbox="false" csimflags=""/>
        <file name="weights.h" sc="0" tb="false" cflags="" blackbox="false" csimflags=""/>
    </files>
    <includePaths/>
    <libraryPaths/>
    <Simulation argv="">
        <SimFlow name="csim" ldflags="" mflags="" clean="true" csimMode="2" lastCsimMode="2"/>
    </Simulation>
    <solutions xmlns="">
        <solution name="solution1" status="active"/>
    </solutions>
</project>

