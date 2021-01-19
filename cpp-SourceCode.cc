/*
 * kvkvk.cc
 *
 *  New WSN protocol for 50 Sensor nodes connected to 10 cluster Heads and 1 Base Station
 *
 *  Created on: Jan 2, 2021
 *      Author: VK
 */
#include<string.h>
#include<omnetpp.h>
#include<stdio.h>
#include<stdlib.h>

//Class Simple Sensor Node

class SN : public omnetpp::cSimpleModule
{
public:
    int energy=0;
    int sent_message_counter=0;
    bool transmission=0; //0=off 1=on

    //public:
    struct TDMA_strctr{
        int order=0;//stores node number
        int belongs_to_cluster=0;
        omnetpp::cMessage *has_msg;
        int has_energy;
    }TDMA[55];
    //static int orders[50];

    virtual void initialize()
    {
        if(strcmp("SN1", getName())==0)
        {
        transmission=0;
        omnetpp::cMessage *msg = new omnetpp::cMessage("transmission for SN 1");
        send(msg,"out2");
        energy=intuniform(50,100);
        TDMA[1].order=1;
        TDMA[1].has_energy=energy;
        TDMA[1].belongs_to_cluster=1;
        TDMA[1].has_msg=msg;
        }
        if(strcmp("SN2", getName())==0)
        {
        transmission=0;
        omnetpp::cMessage *msg = new omnetpp::cMessage("transmission for SN 2");
        send(msg,"out4");
        energy=intuniform(50,100);
        TDMA[2].order=2;
        TDMA[2].has_energy=energy;
        TDMA[2].belongs_to_cluster=1;
        TDMA[2].has_msg=msg;
        }
        if(strcmp("SN3", getName())==0)
        {
        transmission=0;
        omnetpp::cMessage *msg = new omnetpp::cMessage("transmission for SN 3");
        send(msg,"out3");
        energy=intuniform(50,100);
        TDMA[3].order=3;
        TDMA[3].has_energy=energy;
        TDMA[3].belongs_to_cluster=1;
        TDMA[3].has_msg=msg;
        }
        if(strcmp("SN4", getName())==0)
        {
        transmission=0;
        omnetpp::cMessage *msg = new omnetpp::cMessage("transmission for SN 4");
        send(msg,"out2");
        energy=intuniform(50,100);
        TDMA[4].order=4;
        TDMA[4].belongs_to_cluster=1;
        TDMA[4].has_msg=msg;
        TDMA[4].has_energy=energy;
        }
        if(strcmp("SN5", getName())==0)
        {
        transmission=0;
        omnetpp::cMessage *msg = new omnetpp::cMessage("transmission for SN 5");
        send(msg,"out1");
        energy=intuniform(50,100);
        TDMA[5].order=5;
        TDMA[5].belongs_to_cluster=1;
        TDMA[5].has_msg=msg;
        TDMA[5].has_energy=energy;
        }
        if(strcmp("SN6", getName())==0)
        {
        transmission=0;
        omnetpp::cMessage *msg = new omnetpp::cMessage("transmission for SN 6");
        send(msg,"out1");
        energy=intuniform(50,100);
        TDMA[6].order=6;
        TDMA[6].belongs_to_cluster=2;
        TDMA[6].has_msg=msg;
        TDMA[6].has_energy=energy;
        }
        if(strcmp("SN7", getName())==0)
        {
        transmission=0;
        omnetpp::cMessage *msg = new omnetpp::cMessage("transmission for SN 7");
        send(msg,"out2");
        energy=intuniform(50,100);
        TDMA[7].order=7;
        TDMA[7].belongs_to_cluster=2;
        TDMA[7].has_msg=msg;
        TDMA[7].has_energy=energy;
        }
        if(strcmp("SN8", getName())==0)
        {
        transmission=0;
        omnetpp::cMessage *msg = new omnetpp::cMessage("transmission for SN 8");
        send(msg,"out3");
        energy=intuniform(50,100);
        TDMA[8].order=8;
        TDMA[8].belongs_to_cluster=2;
        TDMA[8].has_msg=msg;
        TDMA[8].has_energy=energy;
        }
        if(strcmp("SN9", getName())==0)
        {
        transmission=0;
        omnetpp::cMessage *msg = new omnetpp::cMessage("transmission for SN 9");
        send(msg,"out1");
        energy=intuniform(50,100);
        TDMA[9].order=9;
        TDMA[9].belongs_to_cluster=2;
        TDMA[9].has_msg=msg;
        TDMA[9].has_energy=energy;
        }
        if(strcmp("SN10", getName())==0)
        {
        transmission=0;
        omnetpp::cMessage *msg = new omnetpp::cMessage("transmission for SN 10");
        send(msg,"out1");
        energy=intuniform(50,100);
        TDMA[10].order=10;
        TDMA[10].belongs_to_cluster=2;
        TDMA[10].has_msg=msg;
        TDMA[10].has_energy=energy;
        }
        if(strcmp("SN11", getName())==0)
        {
        transmission=0;
        omnetpp::cMessage *msg = new omnetpp::cMessage("transmission for SN 11");
        send(msg,"out3");
        energy=intuniform(50,100);
        TDMA[11].order=11;
        TDMA[11].belongs_to_cluster=3;
        TDMA[11].has_msg=msg;
        TDMA[11].has_energy=energy;
        }
        if(strcmp("SN12", getName())==0)
        {
        transmission=0;
        omnetpp::cMessage *msg = new omnetpp::cMessage("transmission for SN 12");
        send(msg,"out4");
        energy=intuniform(50,100);
        TDMA[12].order=12;
        TDMA[12].belongs_to_cluster=3;
        TDMA[12].has_energy=energy;
        TDMA[12].has_msg=msg;
        }
        if(strcmp("SN13", getName())==0)
        {
        transmission=0;
        omnetpp::cMessage *msg = new omnetpp::cMessage("transmission for SN 13");
        send(msg,"out2");
        energy=intuniform(50,100);
        TDMA[13].order=13;
        TDMA[13].belongs_to_cluster=3;
        TDMA[13].has_msg=msg;
        TDMA[13].has_energy=energy;
        }
        if(strcmp("SN14", getName())==0)
        {
        transmission=0;
        omnetpp::cMessage *msg = new omnetpp::cMessage("transmission for SN 14");
        send(msg,"out5");
        energy=intuniform(50,100);
        TDMA[14].order=14;
        TDMA[14].belongs_to_cluster=3;
        TDMA[14].has_msg=msg;
        TDMA[14].has_energy=energy;
        }
        if(strcmp("SN15", getName())==0)
        {
        transmission=0;
        omnetpp::cMessage *msg = new omnetpp::cMessage("transmission for SN 15");
        send(msg,"out3");
        energy=intuniform(50,100);
        TDMA[15].order=15;
        TDMA[15].belongs_to_cluster=3;
        TDMA[15].has_msg=msg;
        TDMA[15].has_energy=energy;
        }
        if(strcmp("SN16", getName())==0)
        {
        transmission=0;
        omnetpp::cMessage *msg = new omnetpp::cMessage("transmission for SN 16");
        send(msg,"out3");
        energy=intuniform(50,100);
        TDMA[16].order=16;
        TDMA[16].belongs_to_cluster=4;
        TDMA[16].has_msg=msg;
        TDMA[16].has_energy=energy;
        }
        if(strcmp("SN17", getName())==0)
        {
        transmission=0;
        omnetpp::cMessage *msg = new omnetpp::cMessage("transmission for SN 17");
        send(msg,"out4");
        energy=intuniform(50,100);
        TDMA[17].order=17;
        TDMA[17].belongs_to_cluster=4;
        TDMA[17].has_msg=msg;
        TDMA[17].has_energy=energy;
        }
        if(strcmp("SN18", getName())==0)
        {
        transmission=0;
        omnetpp::cMessage *msg = new omnetpp::cMessage("transmission for SN 18");
        send(msg,"out2");
        energy=intuniform(50,100);
        TDMA[18].order=18;
        TDMA[18].belongs_to_cluster=4;
        TDMA[18].has_msg=msg;
        TDMA[18].has_energy=energy;
        }
        if(strcmp("SN19", getName())==0)
        {
        transmission=0;
        omnetpp::cMessage *msg = new omnetpp::cMessage("transmission for SN 19");
        send(msg,"out5");
        energy=intuniform(50,100);
        TDMA[19].order=19;
        TDMA[19].belongs_to_cluster=4;
        TDMA[19].has_msg=msg;
        TDMA[19].has_energy=energy;
        }
        if(strcmp("SN20", getName())==0)
        {
        transmission=0;
        omnetpp::cMessage *msg = new omnetpp::cMessage("transmission for SN 20");
        send(msg,"out2");
        energy=intuniform(50,100);
        TDMA[20].order=20;
        TDMA[20].belongs_to_cluster=4;
        TDMA[20].has_msg=msg;
        TDMA[20].has_energy=energy;
        }
        if(strcmp("SN21", getName())==0)
        {
        transmission=0;
        omnetpp::cMessage *msg = new omnetpp::cMessage("transmission for SN 21");
        send(msg,"out2");
        energy=intuniform(50,100);
        TDMA[21].order=21;
        TDMA[21].belongs_to_cluster=5;
        TDMA[21].has_msg=msg;
        TDMA[21].has_energy=energy;
        }
        if(strcmp("SN22", getName())==0)
        {
        transmission=0;
        omnetpp::cMessage *msg = new omnetpp::cMessage("transmission for SN 22");
        send(msg,"out3");
        energy=intuniform(50,100);
        TDMA[22].order=22;
        TDMA[22].belongs_to_cluster=5;
        TDMA[22].has_msg=msg;
        TDMA[22].has_energy=energy;
        }
        if(strcmp("SN23", getName())==0)
        {
        transmission=0;
        omnetpp::cMessage *msg = new omnetpp::cMessage("transmission for SN 23");
        send(msg,"out4");
        energy=intuniform(50,100);
        TDMA[23].order=23;
        TDMA[23].belongs_to_cluster=5;
        TDMA[23].has_msg=msg;
        TDMA[23].has_energy=energy;
        }
        if(strcmp("SN24", getName())==0)
        {
        transmission=0;
        omnetpp::cMessage *msg = new omnetpp::cMessage("transmission for SN 24");
        send(msg,"out2");
        energy=intuniform(50,100);
        TDMA[24].order=24;
        TDMA[24].belongs_to_cluster=5;
        TDMA[24].has_msg=msg;
        TDMA[24].has_energy=energy;
        }
        if(strcmp("SN25", getName())==0)
        {
        transmission=0;
        omnetpp::cMessage *msg = new omnetpp::cMessage("transmission for SN 25");
        send(msg,"out3");
        energy=intuniform(50,100);
        TDMA[25].order=25;
        TDMA[25].belongs_to_cluster=5;
        TDMA[25].has_msg=msg;
        TDMA[25].has_energy=energy;
        }
        if(strcmp("SN26", getName())==0)
        {
        transmission=0;
        omnetpp::cMessage *msg = new omnetpp::cMessage("transmission for SN 26");
        send(msg,"out2");
        energy=intuniform(50,100);
        TDMA[26].order=26;
        TDMA[26].belongs_to_cluster=6;
        TDMA[26].has_msg=msg;
        TDMA[26].has_energy=energy;
        }
        if(strcmp("SN27", getName())==0)
        {
        transmission=0;
        omnetpp::cMessage *msg = new omnetpp::cMessage("transmission for SN 27");
        send(msg,"out2");
        energy=intuniform(50,100);
        TDMA[27].order=27;
        TDMA[27].belongs_to_cluster=6;
        TDMA[27].has_msg=msg;
        TDMA[27].has_energy=energy;
        }
        if(strcmp("SN28", getName())==0)
        {
        transmission=0;
        omnetpp::cMessage *msg = new omnetpp::cMessage("transmission for SN 28");
        send(msg,"out2");
        energy=intuniform(50,100);
        TDMA[28].order=28;
        TDMA[28].belongs_to_cluster=6;
        TDMA[28].has_msg=msg;
        TDMA[28].has_energy=energy;
        }
        if(strcmp("SN29", getName())==0)
        {
        transmission=0;
        omnetpp::cMessage *msg = new omnetpp::cMessage("transmission for SN 29");
        send(msg,"out4");
        energy=intuniform(50,100);
        TDMA[29].order=29;
        TDMA[29].belongs_to_cluster=6;
        TDMA[29].has_msg=msg;
        TDMA[29].has_energy=energy;
        }
        if(strcmp("SN30", getName())==0)
        {
        transmission=0;
        omnetpp::cMessage *msg = new omnetpp::cMessage("transmission for SN 30");
        send(msg,"out5");
        energy=intuniform(50,100);
        TDMA[30].order=30;
        TDMA[30].belongs_to_cluster=6;
        TDMA[30].has_msg=msg;
        TDMA[30].has_energy=energy;
        }
        if(strcmp("SN31", getName())==0)
        {
        transmission=0;
        omnetpp::cMessage *msg = new omnetpp::cMessage("transmission for SN 31");
        send(msg,"out2");
        energy=intuniform(50,100);
        TDMA[31].order=31;
        TDMA[31].belongs_to_cluster=7;
        TDMA[31].has_msg=msg;
        TDMA[31].has_energy=energy;
        }
        if(strcmp("SN32", getName())==0)
        {
        transmission=0;
        omnetpp::cMessage *msg = new omnetpp::cMessage("transmission for SN 32");
        send(msg,"out5");
        energy=intuniform(50,100);
        TDMA[32].order=32;
        TDMA[32].belongs_to_cluster=7;
        TDMA[32].has_msg=msg;
        TDMA[32].has_energy=energy;
        }
        if(strcmp("SN33", getName())==0)
        {
        transmission=0;
        omnetpp::cMessage *msg = new omnetpp::cMessage("transmission for SN 33");
        send(msg,"out3");
        energy=intuniform(50,100);
        TDMA[33].order=33;
        TDMA[33].belongs_to_cluster=7;
        TDMA[33].has_msg=msg;
        TDMA[33].has_energy=energy;
        }
        if(strcmp("SN34", getName())==0)
        {
        transmission=0;
        omnetpp::cMessage *msg = new omnetpp::cMessage("transmission for SN 34");
        send(msg,"out2");
        energy=intuniform(50,100);
        TDMA[34].order=34;
        TDMA[34].belongs_to_cluster=7;
        TDMA[34].has_msg=msg;
        TDMA[34].has_energy=energy;
        }
        if(strcmp("SN35", getName())==0)
        {
        transmission=0;
        omnetpp::cMessage *msg = new omnetpp::cMessage("transmission for SN 35");
        send(msg,"out2");
        energy=intuniform(50,100);
        TDMA[35].order=35;
        TDMA[35].belongs_to_cluster=7;
        TDMA[35].has_msg=msg;
        TDMA[35].has_energy=energy;
        }
        if(strcmp("SN36", getName())==0)
        {
        transmission=0;
        omnetpp::cMessage *msg = new omnetpp::cMessage("transmission for SN 36");
        send(msg,"out1");
        energy=intuniform(50,100);
        TDMA[36].order=36;
        TDMA[36].belongs_to_cluster=8;
        TDMA[36].has_msg=msg;
        TDMA[36].has_energy=energy;
        }
        if(strcmp("SN37", getName())==0)
        {
        transmission=0;
        omnetpp::cMessage *msg = new omnetpp::cMessage("transmission for SN 37");
        send(msg,"out4");
        energy=intuniform(50,100);
        TDMA[37].order=37;
        TDMA[37].belongs_to_cluster=8;
        TDMA[37].has_msg=msg;
        TDMA[37].has_energy=energy;
        }
        if(strcmp("SN38", getName())==0)
        {
        transmission=0;
        omnetpp::cMessage *msg = new omnetpp::cMessage("transmission for SN 38");
        send(msg,"out3");
        energy=intuniform(50,100);
        TDMA[38].order=38;
        TDMA[38].belongs_to_cluster=8;
        TDMA[38].has_msg=msg;
        TDMA[38].has_energy=energy;
        }
        if(strcmp("SN39", getName())==0)
        {
        transmission=0;
        omnetpp::cMessage *msg = new omnetpp::cMessage("transmission for SN 39");
        send(msg,"out2");
        energy=intuniform(50,100);
        TDMA[39].order=39;
        TDMA[39].belongs_to_cluster=8;
        TDMA[39].has_msg=msg;
        TDMA[39].has_energy=energy;
        }
        if(strcmp("SN40", getName())==0)
        {
        transmission=0;
        omnetpp::cMessage *msg = new omnetpp::cMessage("transmission for SN 40");
        send(msg,"out3");
        energy=intuniform(50,100);
        TDMA[40].order=40;
        TDMA[40].belongs_to_cluster=8;
        TDMA[40].has_msg=msg;
        TDMA[40].has_energy=energy;
        }
        if(strcmp("SN41", getName())==0)
        {
        transmission=0;
        omnetpp::cMessage *msg = new omnetpp::cMessage("transmission for SN 41");
        send(msg,"out2");
        energy=intuniform(50,100);
        TDMA[41].order=41;
        TDMA[41].belongs_to_cluster=9;
        TDMA[41].has_msg=msg;
        TDMA[41].has_energy=energy;
        }
        if(strcmp("SN42", getName())==0)
        {
        transmission=0;
        omnetpp::cMessage *msg = new omnetpp::cMessage("transmission for SN 42");
        send(msg,"out4");
        energy=intuniform(50,100);
        TDMA[42].order=42;
        TDMA[42].belongs_to_cluster=9;
        TDMA[42].has_msg=msg;
        TDMA[42].has_energy=energy;
        }
        if(strcmp("SN43", getName())==0)
        {
        transmission=0;
        omnetpp::cMessage *msg = new omnetpp::cMessage("transmission for SN 43");
        send(msg,"out3");
        energy=intuniform(50,100);
        TDMA[43].order=43;
        TDMA[43].belongs_to_cluster=9;
        TDMA[43].has_msg=msg;
        TDMA[43].has_energy=energy;
        }
        if(strcmp("SN44", getName())==0)
        {
        transmission=0;
        omnetpp::cMessage *msg = new omnetpp::cMessage("transmission for SN 44");
        send(msg,"out2");
        energy=intuniform(50,100);
        TDMA[44].order=44;
        TDMA[44].belongs_to_cluster=9;
        TDMA[44].has_msg=msg;
        TDMA[44].has_energy=energy;
        }
        if(strcmp("SN45", getName())==0)
        {
        transmission=0;
        omnetpp::cMessage *msg = new omnetpp::cMessage("transmission for SN 45");
        send(msg,"out2");
        energy=intuniform(50,100);
        TDMA[45].order=45;
        TDMA[45].belongs_to_cluster=9;
        TDMA[45].has_msg=msg;
        TDMA[45].has_energy=energy;
        }
        if(strcmp("SN46", getName())==0)
        {
        transmission=0;
        omnetpp::cMessage *msg = new omnetpp::cMessage("transmission for SN 46");
        send(msg,"out1");
        energy=intuniform(50,100);
        TDMA[46].order=46;
        TDMA[46].belongs_to_cluster=10;
        TDMA[46].has_msg=msg;
        TDMA[46].has_energy=energy;
        }
        if(strcmp("SN47", getName())==0)
        {
        transmission=0;
        omnetpp::cMessage *msg = new omnetpp::cMessage("transmission for SN 47");
        send(msg,"out1");
        energy=intuniform(50,100);
        TDMA[47].order=47;
        TDMA[47].belongs_to_cluster=10;
        TDMA[47].has_msg=msg;
        TDMA[47].has_energy=energy;
        }
        if(strcmp("SN48", getName())==0)
        {
        transmission=0;
        omnetpp::cMessage *msg = new omnetpp::cMessage("transmission for SN 48");
        send(msg,"out3");
        energy=intuniform(50,100);
        TDMA[48].order=48;
        TDMA[48].belongs_to_cluster=10;
        TDMA[48].has_msg=msg;
        TDMA[48].has_energy=energy;
        }
        if(strcmp("SN49", getName())==0)
        {
        transmission=0;
        omnetpp::cMessage *msg = new omnetpp::cMessage("transmission for SN 49");
        send(msg,"out3");
        energy=intuniform(50,100);
        TDMA[49].order=49;
        TDMA[49].belongs_to_cluster=10;
        TDMA[49].has_msg=msg;
        TDMA[49].has_energy=energy;
        }
        if(strcmp("SN50", getName())==0)
        {
        transmission=0;
        omnetpp::cMessage *msg = new omnetpp::cMessage("transmission for SN 50");
        send(msg,"out2");
        energy=intuniform(50,100);
        TDMA[50].order=50;
        TDMA[50].belongs_to_cluster=10;
        TDMA[50].has_msg=msg;
        TDMA[50].has_energy=energy;
        }
    }

    virtual void handleMessage(omnetpp::cMessage *msg)
    {
        transmission=1;
        sent_message_counter++;
        if(transmission)
        send(msg, "out1");
    }
    //swap function for Sorting
    void swap(int *xp, int *yp)
    {
        int temp = *xp;
        *xp = *yp;
        *yp = temp;
    }
    //Simple Selection Sort to sort the TDMA table according to energy
    void selectionSort(int arr[])
    {
        int i, j, min_idx;
        int n=50;
        for (i = 0; i < n-1; i++)
        {
            min_idx = i;
            for (j = i+1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;
            swap(&arr[min_idx], &arr[i]);
        }
    }
    //TDMA Method to call Selection sort and sending Energy values to be sorted
    void TDMA_method()
    {
        int order_by_energy[50];
        for(int i=0;i<50;i++)
            order_by_energy[i]=TDMA[i].has_energy;
        //for(int i=0;i<50;i++)
                //orders[i]=order_by_energy[i];
        selectionSort(order_by_energy);
    }
    //void send_TDMA_toCH()
    //{
        //for(int i=0;i<50;i++)
        //orders[i]=order_by_energy[i];
    //}
};
Define_Module(SN);

//Class for Base Station/Sink

//#include "kvkvk.cc"
//#include "vkvkv.cc"
class BS : public omnetpp::cSimpleModule
{
protected:
     virtual void initialize();
     virtual void handleMessage(omnetpp::cMessage *msg);
};
Define_Module(BS);

void BS::initialize()
{
//nothing to initialize as BS only accepts the packets
}
void BS::handleMessage(omnetpp::cMessage *msg)
{
    //msg = receive();
    //std::ostreambuf_iterator<omnetpp::cMessage>;
    //EV>>(msg);
    //std::cout<<msg;
    //omnetpp::mData *DATA = (mData *) msg;
        //if (r == DATA->getRound()){
            //msgBuf.push_back(msg); // insert DATA into the message buffer
            EV << "received data from " << msg->getSenderModuleId() - 2 << "\n";
            //Printing accepted packets "Doesnt work"
}
//#include "kvkvk.cc"

//Class Cluster Heads

class CH : public omnetpp::cSimpleModule
{
    int energy=100;
    bool transmission=0;
    int number_of_packets_recieved=0;
    //struct TDM{
        //int order[10];
    //}TDMA;

void initialize()
{
    if(strcmp("CH", getName())==0)
       {
        transmission=0;
             omnetpp::cMessage *msg = new omnetpp::cMessage("Packets from CH");
             //scheduleAt(0.0, msg);
             if(number_of_packets_recieved==5)
                 send(msg,"out1");
             energy-=10;

       }
    if(strcmp("CH1", getName())==0)
       {
        transmission=0;
             omnetpp::cMessage *msg = new omnetpp::cMessage("Packets from CH1");
             //scheduleAt(0.0, msg);
             if(number_of_packets_recieved==5)
                 send(msg,"out1");
             energy-=10;

       }

    if(strcmp("CH2", getName())==0)
       {
        transmission=0;
           omnetpp::cMessage *msg = new omnetpp::cMessage("Packets from CH2");
           //scheduleAt(4.0, msg);
           if(number_of_packets_recieved==15)
               send(msg,"out1");
           energy-=10;
       }
    if(strcmp("CH3", getName())==0)
       {
        transmission=0;
           omnetpp::cMessage *msg = new omnetpp::cMessage("Packets from CH3");
           //scheduleAt(6.0, msg);
           if(number_of_packets_recieved==20)
               send(msg,"out1");
           energy-=10;
       }
    if(strcmp("CH4", getName())==0)
       {
        transmission=0;
           omnetpp::cMessage *msg = new omnetpp::cMessage("Packets from CH4");
           //scheduleAt(25.0, msg);
           if(number_of_packets_recieved==25)
               send(msg,"out1");
           energy-=10;
       }
    if(strcmp("CH5", getName())==0)
        {
        transmission=0;
            omnetpp::cMessage *msg = new omnetpp::cMessage("Packets from CH5");
            //scheduleAt(30.0, msg);
            if(number_of_packets_recieved==30)
                send(msg,"out1");
            energy-=10;
        }
        if(strcmp("CH6", getName())==0)
           {
            transmission=0;
               omnetpp::cMessage *msg = new omnetpp::cMessage("Packets from CH6");
               //scheduleAt(35.0, msg);
               if(number_of_packets_recieved==35)
                   send(msg,"out1");
               energy-=10;
           }
        if(strcmp("CH7", getName())==0)
           {
            transmission=0;
               omnetpp::cMessage *msg = new omnetpp::cMessage("Packets from CH7");
               //scheduleAt(40.0, msg);
               if(number_of_packets_recieved==40)
                   send(msg,"out1");
               energy-=10;
           }
        if(strcmp("CH8", getName())==0)
           {
            transmission=0;
               omnetpp::cMessage *msg = new omnetpp::cMessage("Packets from CH8");
               //scheduleAt(45.0, msg);
               if(number_of_packets_recieved==45)
                   send(msg,"out1");
               energy-=10;
           }
        if(strcmp("CH9", getName())==0)
           {
            transmission=0;
                omnetpp::cMessage *msg = new omnetpp::cMessage("Packets from CH9");
                //scheduleAt(50.0, msg);
                if(number_of_packets_recieved==50)
                    send(msg,"out1");
                energy-=10;
           }
}

void handleMessage(omnetpp::cMessage *msg)
{
    //for(int i=0;i<50;i++)
    {transmission=1;
        //if (SN::TDMA[i].belongs_to_cluster==1)
        {
            if(strcmp("CH", getName())==0)
            number_of_packets_recieved++;
            send_Recieved();
        }
        //if (SN::TDMA[i].belongs_to_cluster==2)
        {
                   if(strcmp("CH1", getName())==0)
                   number_of_packets_recieved++;
                   send_Recieved();
        }
        //if (SN::TDMA[i].belongs_to_cluster==3)
        {
            if(strcmp("CH2", getName())==0)
            number_of_packets_recieved++;
            send_Recieved();
        }
       // if (SN::TDMA[i].belongs_to_cluster==4)
        {
            if(strcmp("CH3", getName())==0)
            number_of_packets_recieved++;
            send_Recieved();
        }
        //if (SN::TDMA[i].belongs_to_cluster==5)
        {
            if(strcmp("CH4", getName())==0)
            number_of_packets_recieved++;
            send_Recieved();
        }
        //if (SN::TDMA[i].belongs_to_cluster==6)
        {
            if(strcmp("CH5", getName())==0)
            number_of_packets_recieved++;
            send_Recieved();
        }
        //if (SN::TDMA[i].belongs_to_cluster==7)
        {
            if(strcmp("CH6", getName())==0)
            number_of_packets_recieved++;
            send_Recieved();
        }
        //if (SN::TDMA[i].belongs_to_cluster==8)
        {
            if(strcmp("CH7", getName())==0)
            number_of_packets_recieved++;
            send_Recieved();
        }
        //if (SN::TDMA[i].belongs_to_cluster==9)
        {
            if(strcmp("CH8", getName())==0)
            number_of_packets_recieved++;
            send_Recieved();
        }
       // if (SN::TDMA[i].belongs_to_cluster==10)
        {
            if(strcmp("CH9", getName())==0)
            number_of_packets_recieved++;
            send_Recieved();
        }
    }
        //send(msg, "out1");
}
//Function to send the recieved messages after collecting them from SN
void send_Recieved()
{
    if(strcmp("CH", getName())==0)
        if(transmission)
        if(number_of_packets_recieved==5)
        {
            omnetpp::cMessage *msg = new omnetpp::cMessage("Packets from CH");
            send(msg,"out1");
        }
    if(strcmp("CH1", getName())==0)
            if(transmission)
            if(number_of_packets_recieved==5)
            {
                omnetpp::cMessage *msg = new omnetpp::cMessage("Packets from CH1");
                send(msg,"out1");
            }
    if(strcmp("CH2", getName())==0)
        if(transmission)
       if(number_of_packets_recieved==5)
       {
           omnetpp::cMessage *msg = new omnetpp::cMessage("Packets from CH2");
           send(msg,"out1");
       }
    if(strcmp("CH3", getName())==0)
        if(transmission)
          if(number_of_packets_recieved==5)
          {
              omnetpp::cMessage *msg = new omnetpp::cMessage("Packets from CH3");
              send(msg,"out1");
          }
    if(strcmp("CH4", getName())==0)
        if(transmission)
          if(number_of_packets_recieved==5)
          {
              omnetpp::cMessage *msg = new omnetpp::cMessage("Packets from CH4");
              send(msg,"out1");
          }
    if(strcmp("CH5", getName())==0)
        if(transmission)
          if(number_of_packets_recieved==5)
          {
              omnetpp::cMessage *msg = new omnetpp::cMessage("Packets from CH5");
              send(msg,"out1");
          }
    if(strcmp("CH6", getName())==0)
        if(transmission)
          if(number_of_packets_recieved==5)
          {
              omnetpp::cMessage *msg = new omnetpp::cMessage("Packets from CH6");
              send(msg,"out1");
          }
    if(strcmp("CH7", getName())==0)
        if(transmission)
          if(number_of_packets_recieved==5)
          {
              omnetpp::cMessage *msg = new omnetpp::cMessage("Packets from CH7");
              send(msg,"out1");
          }
    if(strcmp("CH8", getName())==0)
        if(transmission)
          if(number_of_packets_recieved==5)
          {
              omnetpp::cMessage *msg = new omnetpp::cMessage("Packets from CH8");
              send(msg,"out1");
          }
    if(strcmp("CH9", getName())==0)
        if(transmission)
          if(number_of_packets_recieved==5)
          {
              omnetpp::cMessage *msg = new omnetpp::cMessage("Packets from CH9");
              send(msg,"out1");
          }
    }
};
Define_Module(CH);


//Author Vinay Karthik Maradi Balachandra

