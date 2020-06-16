#ifndef AITRANS_H_
#define AITRANS_H_
#include <stdint.h>
struct Blocks
{
    uint64_t *blocks_id, *blocks_deadline, *blocks_priority, *blocks_create_time;
    uint64_t block_num;
};
uint64_t SolutionSelectPacket(struct Blocks blocks, uint64_t current_time);
uint64_t CSelectBlock(char *blocks_string, uint64_t block_num, uint64_t current_time);
uint64_t SolutionCcTrigger(char *event_type, uint64_t cwnd);
uint64_t Ccc_trigger(char *event_type,uint64_t cwnd);

#endif /* AITRANS_H_ */