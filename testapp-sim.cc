#include "ns3/core-module.h"
#include "ns3/network-module.h"
#include "ns3/applications-module.h"

using namespace ns3;

NS_LOG_COMPONENT_DEFINE ("TestExample");

int
main (int argc, char *argv[])
{
  NodeContainer nodes;
  nodes.Create (1);

  TestApplication tapp;
  tapp.SetNode(nodes.Get(1));
  tapp.SetStartTime (Seconds (1.0));
  tapp.SetStopTime (Seconds (2.0));

  Simulator::Run ();
  Simulator::Destroy ();
  return 0;
}
