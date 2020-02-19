#pragma once

#include <cstdint>
#include <vector>

namespace fbgemm {

enum EmbeddingSpMDMCornerCase {
  NONE,
  EMPTY_INDICES,
  OUT_OF_BOUND_INDICES,
  UNMATCHED_NUM_INDICES_AND_LENGTHS_SUM,
};

/**
 * @return lengths_sum
 */
int GenerateLengthsIndicesWeights(
    std::vector<int>& lengths,
    std::vector<std::int64_t>& indices,
    std::vector<std::int32_t>& indices_32,
    std::vector<float>& weights,
    int batch_size,
    int num_rows,
    int embedding_dim,
    int average_len,
    EmbeddingSpMDMCornerCase corner_case);

/**
 * @return num_compressed_rows
 */
int CreateMappingTableForRowWiseSparsity(
    std::vector<std::int64_t>& mapping_table,
    std::vector<std::int32_t>& mapping_table_32,
    int num_rows,
    float sparsity);

}; // namespace fbgemm
