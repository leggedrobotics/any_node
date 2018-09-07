#include "any_node/any_node.hpp"

#include "any_node_example/ExampleNode.hpp"

   
int main(int argc, char **argv) {
    any_node::Nodewrap<any_node_example::ExampleNode> node(argc, argv, "exampleNode", 4); // use 4 spinner threads
    node.execute(10);   // 10=priority of the thread calling the update(..) function (if any)
                        // execute blocks until the node was requested to shut down (after reception of a signal (e.g. SIGINT) or after calling the any_node::Node::shutdown() function) 
    return 0;
}