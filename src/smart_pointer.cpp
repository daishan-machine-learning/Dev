#include<iostream>
#include<string>
#include<memory>
// ����ָ����ԭʼָ��İ�װ
//unique pointer����򵥵�pointer������scope pointer����������ǰ��scopeʱ���ͻ��Զ����٣�������delete
// ����ָ�붼��memoryͷ�ļ���
//unique_ptr�ǲ��ܿ����ģ���Ϊ������ָ��ָ�����ͬһ������ʱ����һ��ָ���ͷ���󣬶��������Ѿ������١��ڶ���ָ���ͷŵ�ʱ�򣬾ͻᵼ��memory leak
//unique_ptr �Ŀ������캯���͸�ֵ������������Ϊdelete
// unique_ptr(const unique_ptr& ) = delete;
// unique_ptr& operator=(const unique_ptr&) = delete;
// shared_ptr ʹ�����ü������������ǽ��п����͸�ֵ
// weak_ptr ��shared_ptrһ���������͸�ֵ�����ǲ�������shared_ptr�����ü���
namespace Smart_ptr {
	class Entity {
	public:
		Entity() {

			std::cout << "Created Entity" << std::endl;

		}
		~Entity() {

			std::cout << "Destroyed Entity" << std::endl;
		}
		void Print() {
			std::cout << "Print Entity" << std::endl;
		}
	};
	int main_smart_ptr() {
		{
			//std::unique_ptr<Entity> entity(new Entity());
			std::unique_ptr<Entity> entity = std::make_unique<Entity>();  // ���Ǹ���ȫ�����������Դ���Exception(�쳣)
			//std::unique_ptr e0 = entity;  // ���ܿ��� unique_ptr(const unique_ptr&) = delete;
											//         unique_ptr& operator=(const unique_ptr&) = delete;
			entity->Print();

			// shared_ptr ʹ�õ���reference counting(���ü���)
			std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();
			sharedEntity->Print();
			std::shared_ptr<Entity> sharedEntity1 = sharedEntity;


		}
		{
			std::shared_ptr<Entity> e0;
			{
				std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();
				e0 = sharedEntity;

			}
		}
		std::cin.get();
		return 0;
	}
}