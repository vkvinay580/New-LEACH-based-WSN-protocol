//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
// 
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see http://www.gnu.org/licenses/.
//
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHout1ANY WARRANTY; without1even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
// 
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see http://www.gnu.org/licenses/.
//
//Operating Systems and Networks Assignment
//
// Author VK
//
//Simple Network containing 50 Sensor Nodes, 10 Pre Elected Cluster Heads and 1 Base Station
//Used to implement a WSN
//

simple BS
{
    @display("i=device/antennatower");
    int round = 1;
    int Recieve_data = 0;
    gates:

        input in1;
        input in2;
        input in3;
        input in4;
        input in5;
        input in6;
        input in7;
        input in8;
        input in9;
        input in10;
}

//
// TODO documentation
//
simple CH
{
    @display("i=device/accesspoint,#4F4FBB");
    int number_of_packets_recieved = 0;
    int number_of_nodes = 5;
    int round = 1;
    int is_Cluster_Head = 1;
    gates:
        input in1;
        input in2;
        input in3;
        input in4;
        input in5;
        output out1;
}

simple SN
{
    @display("i=device/accesspoint,#DA5819");
    int round = 1;
    int energy = intuniform(50,100);
    int is_Cluster_Head = 0;
    gates:
        input in1;
        input in2;
        input in3;
        input in4;
        output out1;
        output out2;
        output out3;
        output out4;
        output out5;
}

//
// TODO documentation
//
network Network
{
    @display("bgb=1523.9867,1098.2101;bgl=3;bgi=background/terrain,s");
    submodules:
        CH: CH {
            @display("p=434.122,319.07202");
        }
        SN6: SN {
            @display("p=332.87802,119.65201");
        }
        SN7: SN {
            @display("p=429.52002,42.952003");
        }
        SN8: SN {
            @display("p=493.94803,214.76001");
        }
        SN9: SN {
            @display("p=512.356,119.65201");
        }
        SN10: SN {
            @display("p=369.694,234.70201");
        }
        CH2: CH {
            @display("p=716.37805,329.81003");
        }
        SN11: SN {
            @display("p=615.13403,130.39");
        }
        SN12: SN {
            @display("p=711.776,53.690002");
        }
        SN13: SN {
            @display("p=776.20404,225.49802");
        }
        SN14: SN {
            @display("p=794.61206,130.39");
        }
        SN15: SN {
            @display("p=651.95,245.44");
        }
        CH3: CH {
            @display("p=1021.64404,319.07202");
        }
        SN16: SN {
            @display("p=920.4,119.65201");
        }
        SN17: SN {
            @display("p=1017.04205,42.952003");
        }
        SN18: SN {
            @display("p=1081.4701,214.76001");
        }
        SN19: SN {
            @display("p=1099.878,119.65201");
        }
        SN20: SN {
            @display("p=957.21606,234.70201");
        }
        CH4: CH {
            @display("p=1322.3081,319.07202");
        }
        SN21: SN {
            @display("p=1221.0641,119.65201");
        }
        SN22: SN {
            @display("p=1317.706,42.952003");
        }
        SN23: SN {
            @display("p=1382.134,214.76001");
        }
        SN24: SN {
            @display("p=1400.5421,119.65201");
        }
        SN25: SN {
            @display("p=1257.88,234.70201");
        }
        CH6: CH {
            @display("p=434.122,653.484");
        }
        SN31: SN {
            @display("p=343.61603,720.98004");
        }
        SN32: SN {
            @display("p=446.394,920.4");
        }
        SN33: SN {
            @display("p=504.68604,816.088");
        }
        SN34: SN {
            @display("p=523.094,720.98004");
        }
        SN35: SN {
            @display("p=380.432,836.03");
        }
        CH7: CH {
            @display("p=770.06805,674.96");
        }
        SN36: SN {
            @display("p=662.68805,742.45605");
        }
        SN37: SN {
            @display("p=776.20404,941.87604");
        }
        SN38: SN {
            @display("p=854.43805,857.50604");
        }
        SN39: SN {
            @display("p=860.57404,742.45605");
        }
        SN40: SN {
            @display("p=699.504,857.50604");
        }
        CH8: CH {
            @display("p=1052.3241,644.28");
        }
        SN41: SN {
            @display("p=967.95404,720.98004");
        }
        SN42: SN {
            @display("p=1069.198,920.4");
        }
        SN43: SN {
            @display("p=1129.024,816.088");
        }
        SN44: SN {
            @display("p=1147.432,720.98004");
        }
        SN45: SN {
            @display("p=1004.77,836.03");
        }
        CH9: CH {
            @display("p=1346.852,644.28");
        }
        SN46: SN {
            @display("p=1250.2101,720.98004");
        }
        SN47: SN {
            @display("p=1346.852,920.4");
        }
        SN48: SN {
            @display("p=1411.28,816.088");
        }
        SN49: SN {
            @display("p=1429.6881,720.98004");
        }
        SN50: SN {
            @display("p=1287.026,836.03");
        }
        bs: BS {
            @display("p=747.05804,486.278;is=vl;i=,#1ADD1A,0");
        }
        CH5: CH {
            @display("p=151.86601,674.96");
        }
        SN26: SN {
            @display("p=64.428,730.184");
        }
        SN27: SN {
            @display("p=165.67201,931.13806");
        }
        SN28: SN {
            @display("p=225.49802,825.29205");
        }
        SN29: SN {
            @display("p=243.906,730.184");
        }
        SN30: SN {
            @display("p=101.244,845.234");
        }
        CH1: CH {
            @display("p=164.3075,328.615");
        }
        SN1: SN {
            @display("p=64.119995,128.23999");
        }
        SN2: SN {
            @display("p=160.3,52.0975");
        }
        SN3: SN {
            @display("p=224.42,224.42");
        }
        SN4: SN {
            @display("p=242.45375,128.23999");
        }
        SN5: SN {
            @display("p=100.1875,244.45749");
        }
    connections:
        SN9.out3 --> CH.in5;
        SN9.out5 --> SN10.in3;
        SN9.out4 --> SN8.in4;
        SN9.out2 --> SN6.in4;
        SN9.out1 --> SN7.in2;
        SN6.out1 --> SN10.in1;
        SN6.out2 --> SN8.in1;
        SN6.out3 --> SN7.in1;
        SN6.out4 --> SN9.in1;
        SN6.out5 --> CH.in2;
        SN10.out1 --> CH.in3;
        SN10.out5 --> SN8.in2;
        SN10.out4 --> SN6.in3;
        SN10.out3 --> SN9.in3;
        SN10.out2 --> SN7.in3;
        SN8.out2 --> CH.in4;
        SN8.out5 --> SN10.in4;
        SN8.out4 --> SN6.in2;
        SN8.out3 --> SN9.in4;
        SN8.out1 --> SN7.in4;
        SN7.out1 --> SN6.in1;
        SN7.out2 --> SN10.in2;
        SN7.out3 --> SN8.in3;
        SN7.out4 --> SN9.in2;
        SN7.out5 --> CH.in1;
        SN14.out3 --> CH2.in5;
        SN14.out5 --> SN15.in3;
        SN14.out4 --> SN13.in4;
        SN14.out2 --> SN11.in4;
        SN14.out1 --> SN12.in2;
        SN11.out1 --> SN15.in1;
        SN11.out2 --> SN13.in1;
        SN11.out3 --> SN12.in1;
        SN11.out4 --> SN14.in1;
        SN11.out5 --> CH2.in2;
        SN15.out1 --> CH2.in3;
        SN15.out5 --> SN13.in2;
        SN15.out4 --> SN11.in3;
        SN15.out3 --> SN14.in3;
        SN15.out2 --> SN12.in3;
        SN13.out2 --> CH2.in4;
        SN13.out5 --> SN15.in4;
        SN13.out4 --> SN11.in2;
        SN13.out3 --> SN14.in4;
        SN13.out1 --> SN12.in4;
        SN12.out1 --> SN11.in1;
        SN12.out2 --> SN15.in2;
        SN12.out3 --> SN13.in3;
        SN12.out4 --> SN14.in2;
        SN12.out5 --> CH2.in1;
        SN19.out3 --> CH3.in5;
        SN19.out5 --> SN20.in3;
        SN19.out4 --> SN18.in4;
        SN19.out2 --> SN16.in4;
        SN19.out1 --> SN17.in2;
        SN16.out1 --> SN20.in1;
        SN16.out2 --> SN18.in1;
        SN16.out3 --> SN17.in1;
        SN16.out4 --> SN19.in1;
        SN16.out5 --> CH3.in2;
        SN20.out1 --> CH3.in3;
        SN20.out5 --> SN18.in2;
        SN20.out4 --> SN16.in3;
        SN20.out3 --> SN19.in3;
        SN20.out2 --> SN17.in3;
        SN18.out2 --> CH3.in4;
        SN18.out5 --> SN20.in4;
        SN18.out4 --> SN16.in2;
        SN18.out3 --> SN19.in4;
        SN18.out1 --> SN17.in4;
        SN17.out1 --> SN16.in1;
        SN17.out2 --> SN20.in2;
        SN17.out3 --> SN18.in3;
        SN17.out4 --> SN19.in2;
        SN17.out5 --> CH3.in1;
        SN24.out3 --> CH4.in5;
        SN24.out5 --> SN25.in3;
        SN24.out4 --> SN23.in4;
        SN24.out2 --> SN21.in4;
        SN24.out1 --> SN22.in2;
        SN21.out1 --> SN25.in1;
        SN21.out2 --> SN23.in1;
        SN21.out3 --> SN22.in1;
        SN21.out4 --> SN24.in1;
        SN21.out5 --> CH4.in2;
        SN25.out1 --> CH4.in3;
        SN25.out5 --> SN23.in2;
        SN25.out4 --> SN21.in3;
        SN25.out3 --> SN24.in3;
        SN25.out2 --> SN22.in3;
        SN23.out2 --> CH4.in4;
        SN23.out5 --> SN25.in4;
        SN23.out4 --> SN21.in2;
        SN23.out3 --> SN24.in4;
        SN23.out1 --> SN22.in4;
        SN22.out1 --> SN21.in1;
        SN22.out2 --> SN25.in2;
        SN22.out3 --> SN23.in3;
        SN22.out4 --> SN24.in2;
        SN22.out5 --> CH4.in1;
        SN34.out3 --> CH6.in5;
        SN34.out5 --> SN35.in3;
        SN34.out4 --> SN33.in4;
        SN34.out2 --> SN31.in4;
        SN34.out1 --> SN32.in2;
        SN31.out1 --> SN35.in1;
        SN31.out2 --> SN33.in1;
        SN31.out3 --> SN32.in1;
        SN31.out4 --> SN34.in1;
        SN31.out5 --> CH6.in2;
        SN35.out1 --> CH6.in3;
        SN35.out5 --> SN33.in2;
        SN35.out4 --> SN31.in3;
        SN35.out3 --> SN34.in3;
        SN35.out2 --> SN32.in3;
        SN33.out2 --> CH6.in4;
        SN33.out5 --> SN35.in4;
        SN33.out4 --> SN31.in2;
        SN33.out3 --> SN34.in4;
        SN33.out1 --> SN32.in4;
        SN32.out1 --> SN31.in1;
        SN32.out2 --> SN35.in2;
        SN32.out3 --> SN33.in3;
        SN32.out4 --> SN34.in2;
        SN32.out5 --> CH6.in1;
        SN39.out3 --> CH7.in5;
        SN39.out5 --> SN40.in3;
        SN39.out4 --> SN38.in4;
        SN39.out2 --> SN36.in4;
        SN39.out1 --> SN37.in2;
        SN36.out1 --> SN40.in1;
        SN36.out2 --> SN38.in1;
        SN36.out3 --> SN37.in1;
        SN36.out4 --> SN39.in1;
        SN36.out5 --> CH7.in2;
        SN40.out1 --> CH7.in3;
        SN40.out5 --> SN38.in2;
        SN40.out4 --> SN36.in3;
        SN40.out3 --> SN39.in3;
        SN40.out2 --> SN37.in3;
        SN38.out2 --> CH7.in4;
        SN38.out5 --> SN40.in4;
        SN38.out4 --> SN36.in2;
        SN38.out3 --> SN39.in4;
        SN38.out1 --> SN37.in4;
        SN37.out1 --> SN36.in1;
        SN37.out2 --> SN40.in2;
        SN37.out3 --> SN38.in3;
        SN37.out4 --> SN39.in2;
        SN37.out5 --> CH7.in1;
        SN44.out3 --> CH8.in5;
        SN44.out5 --> SN45.in3;
        SN44.out4 --> SN43.in4;
        SN44.out2 --> SN41.in4;
        SN44.out1 --> SN42.in2;
        SN41.out1 --> SN45.in1;
        SN41.out2 --> SN43.in1;
        SN41.out3 --> SN42.in1;
        SN41.out4 --> SN44.in1;
        SN41.out5 --> CH8.in2;
        SN45.out1 --> CH8.in3;
        SN45.out5 --> SN43.in2;
        SN45.out4 --> SN41.in3;
        SN45.out3 --> SN44.in3;
        SN45.out2 --> SN42.in3;
        SN43.out2 --> CH8.in4;
        SN43.out5 --> SN45.in4;
        SN43.out4 --> SN41.in2;
        SN43.out3 --> SN44.in4;
        SN43.out1 --> SN42.in4;
        SN42.out1 --> SN41.in1;
        SN42.out2 --> SN45.in2;
        SN42.out3 --> SN43.in3;
        SN42.out4 --> SN44.in2;
        SN42.out5 --> CH8.in1;
        SN49.out3 --> CH9.in5;
        SN49.out5 --> SN50.in3;
        SN49.out4 --> SN48.in4;
        SN49.out2 --> SN46.in4;
        SN49.out1 --> SN47.in2;
        SN46.out1 --> SN50.in1;
        SN46.out2 --> SN48.in1;
        SN46.out3 --> SN47.in1;
        SN46.out4 --> SN49.in1;
        SN46.out5 --> CH9.in2;
        SN50.out1 --> CH9.in3;
        SN50.out5 --> SN48.in2;
        SN50.out4 --> SN46.in3;
        SN50.out3 --> SN49.in3;
        SN50.out2 --> SN47.in3;
        SN48.out2 --> CH9.in4;
        SN48.out5 --> SN50.in4;
        SN48.out4 --> SN46.in2;
        SN48.out3 --> SN49.in4;
        SN48.out1 --> SN47.in4;
        SN47.out1 --> SN46.in1;
        SN47.out2 --> SN50.in2;
        SN47.out3 --> SN48.in3;
        SN47.out4 --> SN49.in2;
        SN47.out5 --> CH9.in1;
        CH2.out1 --> bs.in2;
        CH3.out1 --> bs.in3;
        CH4.out1 --> bs.in4;
        CH6.out1 --> bs.in6;
        CH7.out1 --> bs.in7;
        CH8.out1 --> bs.in8;
        CH9.out1 --> bs.in9;
        SN27.out1 --> SN26.in1;
        SN27.out2 --> SN30.in2;
        SN27.out3 --> SN28.in3;
        SN27.out4 --> SN29.in2;
        SN27.out5 --> CH5.in1;
        SN26.out1 --> SN30.in1;
        SN26.out2 --> SN28.in1;
        SN26.out3 --> SN27.in1;
        SN26.out4 --> SN29.in1;
        SN26.out5 --> CH5.in2;
        SN28.out2 --> CH5.in4;
        SN28.out5 --> SN30.in4;
        SN28.out4 --> SN26.in2;
        SN28.out3 --> SN29.in4;
        SN28.out1 --> SN27.in4;
        SN30.out1 --> CH5.in3;
        SN30.out5 --> SN28.in2;
        SN30.out4 --> SN26.in3;
        SN30.out3 --> SN29.in3;
        SN30.out2 --> SN27.in3;
        SN29.out3 --> CH5.in5;
        SN29.out5 --> SN30.in3;
        SN29.out4 --> SN28.in4;
        SN29.out2 --> SN26.in4;
        SN29.out1 --> SN27.in2;
        CH5.out1 --> bs.in5;
        SN4.out3 --> CH1.in5;
        SN4.out5 --> SN5.in3;
        SN4.out4 --> SN3.in4;
        SN4.out2 --> SN1.in4;
        SN4.out1 --> SN2.in2;
        SN1.out1 --> SN5.in1;
        SN1.out2 --> SN3.in1;
        SN1.out3 --> SN2.in1;
        SN1.out4 --> SN4.in1;
        SN1.out5 --> CH1.in2;
        SN3.out2 --> CH1.in4;
        SN3.out5 --> SN5.in4;
        SN3.out4 --> SN1.in2;
        SN3.out3 --> SN4.in4;
        SN3.out1 --> SN2.in4;
        SN2.out1 --> SN1.in1;
        SN2.out2 --> SN5.in2;
        SN2.out3 --> SN3.in3;
        SN2.out4 --> SN4.in2;
        SN2.out5 --> CH1.in1;
        SN5.out1 --> CH1.in3;
        SN5.out5 --> SN3.in2;
        SN5.out4 --> SN1.in3;
        SN5.out3 --> SN4.in3;
        SN5.out2 --> SN2.in3;
        CH1.out1 --> bs.in1;
        CH.out1 --> bs.in10;
}


